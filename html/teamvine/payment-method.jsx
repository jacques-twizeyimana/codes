import { Typography } from '@material-ui/core'
import React from 'react'
import PaymentIcon from '@material-ui/icons/Payment';
import { Image } from 'react-bootstrap';
import CheckCircleSharpIcon from '@material-ui/icons/CheckCircleSharp';
import TextField from '@material-ui/core/TextField';
import OutlinedInput from '@material-ui/core/OutlinedInput';
import InputLabel from '@material-ui/core/InputLabel';
import InputAdornment from '@material-ui/core/InputAdornment';
import FormControl from '@material-ui/core/FormControl';


import IconButton from '@material-ui/core/IconButton';
import Visibility from '@material-ui/icons/Visibility';
import VisibilityOff from '@material-ui/icons/VisibilityOff';
import DateFnsUtils from '@date-io/date-fns';
import {MuiPickersUtilsProvider,KeyboardDatePicker} from '@material-ui/pickers';
import {checkCreditCard} from '../../utils/card'


export default function PaymentMethods({setMyData}) {
    const [paymentMethod, setPaymentMethod] = React.useState('momo');
    const [validationError,setValidationError] = React.useState({status:false,message:''})
    const changePaymentOption = (option) =>{
            setPaymentMethod(option)
    } 

  const [values, setValues] = React.useState({
    cardHolder: '',
    cardNumber: '',
    cardExpDate:  new Date(new Date().getTime() + 24 * 60 * 60 * 1000),
    cardCvv: '',
    momoNumber:'',
    momoPin:'',
    tigoCashNumber:'',
    tigoCashPin:'',
    showPin:false
  });

  
  const handleSend = () => {
    setMyData({
        province:values.province,
        district:values.district,
        zone:values.zone
    })
    }
    
    const handleGoBack = () =>{
        setMyData({
            province:values.province,
            district:values.district,
            zone:values.zone,
            goBack:true
        })
    }

  const handleClickShowPin = () => {
    setValues({ ...values, showPin: !values.showPin });
  };

  const handleMouseDownPin = (event) => {
    event.preventDefault();
  };

  const handleChange = (prop) => (event) => {
    setValues({ ...values, [prop]: event.target.value });
  };

  const handleDateChange = (date) => {
    setValues({ ...values, cardExpDate:date });
  };

  const validatePaymentInfo = ()=>{
        if(paymentMethod === "card"){
            if(values.cardHolder.trim().length < 1 || values.cardNumber.trim().length < 1 || values.cardExpDate.trim().length < 1){
                setValidationError({status:true,message:'All field are required'})
            }
            else if(values.cardCvv.length !== 3 || values.cardCvv.length !==4)  setValidationError({status:true,message:'Card verfication code must be atlest 3 charcters'})
            else if (values.cardHolder.trim().length < 4) {
                setValidationError({status:true,message:'Card holder name must be atleast 4 characters long'})
            }
        }

        handleSend();
  }

    return (
        <div className="cont-order" id="cont-order">
            {/* <div className="bg-white container-fluid p-md-5"> */}

                <div className="col-md-10 mx-auto py-md-4 px-md-5 bg-light rounded">                    
                    <div className="bg-white rounded p-md-4 border-light">
                        <h3 className="text-left text-gray p-3">PAYMENT METHODS</h3>
                        <hr className="text-light"/>
                        <h6 className="text-gray px-3">CHOOSE A PAYMENT METHOD</h6>
                        <div class="container-fluid ">
                            <div class="row">
                                <div onClick={()=>changePaymentOption('card')}  className={ (paymentMethod === "card" ? ' selected ': '') + "payment-option ml-auto col-sm-5 col-md-3 bg-light py-4 text-center mt-2 border"} style={{borderRadius:'20px'}}>
                                    <CheckCircleSharpIcon fontSize="large" className={paymentMethod === "card" ? "text-primary selected-pay-mtd" : ' d-none'}/>
                                    <PaymentIcon fontSize="large"/>
                                    <Typography className="mt-2">CREDIT CARD</Typography>
                                </div>
                                <div onClick={()=>changePaymentOption('momo')} className={ (paymentMethod === "momo" ? ' selected ': '') + "payment-option mx-auto col-sm-5 col-md-3 bg-light py-4 text-center mt-2 border"}  style={{borderRadius:'20px'}}>
                                    <CheckCircleSharpIcon fontSize="large" className={paymentMethod === "momo" ? "text-primary selected-pay-mtd" : ' d-none'}/>
                                    <Image className="d-block mx-auto" width="30" height="30" src="https://i0.wp.com/www.gsma.com/mobilefordevelopment/wp-content/uploads/2020/05/MTN-Mobile-Money-Logo-200x200-1.png?fit=200%2C200&ssl=1" alt="MTN MoMo"/>
                                    <Typography className="mt-2">MTN MoMo</Typography>
                                </div>
                            <div  onClick={()=>changePaymentOption('airtelMoney')} className={ (paymentMethod === "airtelMoney" ? ' selected ': '') + "payment-option mx-auto col-sm-5 col-md-3 bg-light py-4 text-center mt-2 border"} style={{borderRadius:'20px'}}>
                                <CheckCircleSharpIcon fontSize="large" className={paymentMethod === "airtelMoney" ? "text-primary selected-pay-mtd" : ' d-none'}/>
                                <Image className="d-block mx-auto" width="30" height="30" src="https://x7d4c5z5.stackpathcdn.com/wp-content/uploads/2015/03/Airtel-Money-logo.jpg" alt="Airtel Money"/>
                                <Typography className="mt-2">AIRTEL MONEY</Typography>
                            </div>
                            </div>
                        </div>
                        <div className="payment-info">
                            <div className={paymentMethod !== "card" ? "d-none" : "pay-with-card container-fluid mt-4"}>
                                <hr className="text-light mb-4"/>                                
                                <h6 className="text-gray">CONTINUE WITH VISA or MASTERCARD</h6>
                                <div className="like-form mt-5 row">
                                    <div className="col-md-6">
                                        <TextField id="card-number" className="w-100" onChange={handleChange("cardNumber")} label="CARD NUMBER" variant="outlined" />
                                        <TextField id="card-holder" className="w-100 mt-4"  onChange={handleChange("cardHolder")} label="CARD HOLDER NAME" variant="outlined" />
                                    </div>
                                    <div className="col-md-6">
                                        <MuiPickersUtilsProvider utils={DateFnsUtils} className="w-100">
                                            <KeyboardDatePicker margin="normal" id="card-exp-date" label="EXPIRATION DATE" format="MM/dd/yyyy" value={values.cardExpDate}  onChange={handleDateChange} KeyboardButtonProps={{'aria-label': 'Card exp date', }} />
                                        </MuiPickersUtilsProvider>
                                        <FormControl fullWidth variant="outlined" className="mt-2">
                                            <InputLabel htmlFor="card-cvv">CVV</InputLabel>
                                            <OutlinedInput id="card-cvv" value={values.amount} onChange={handleChange('cardCvv')} endAdornment={<InputAdornment position="end"> <PaymentIcon /> </InputAdornment>} labelWidth={60}/>
                                        </FormControl>                                        
                                    </div>
                                </div>
                            </div>
                            <div className={paymentMethod !== "momo" ? "d-none" : "pay-with-momo container-fluid mt-4"}>
                                <hr className="text-light"/>                              
                                <h6 className="text-gray my-4">PAY WITH MTN MOBILE MONEY</h6>
                                <div className="momo-form col-md-10 col-lg-7 mx-auto mt-4">                             
                                    <TextField id="momo-number" className="w-100" onChange={handleChange("momoNumber")} label="PHONE NUMBER" variant="outlined" />
                                    
                                    <FormControl className="w-100 mt-4" variant="outlined">
                                    <InputLabel htmlFor="momo-pin">MoMo PIN</InputLabel>
                                    <OutlinedInput id="momo-pin" type={values.showPin ? 'text' : 'password'} value={values.momoPin} onChange={handleChange('momoPin')} endAdornment={
                                        <InputAdornment position="end"> <IconButton aria-label="toggle PIN visibility" onClick={handleClickShowPin} onMouseDown={handleMouseDownPin} edge="end"> {values.showPin ? <Visibility /> : <VisibilityOff />}</IconButton> </InputAdornment> } labelWidth={70}/>
                                    </FormControl>
                                </div> 
                            </div>
                            <div className={paymentMethod !== "airtelMoney" ? "d-none" : "pay-with-airtel container-fluid mt-4"}>
                                <hr className="text-light"/>                              
                                <h6 className="text-gray my-4">PAY WITH AIRTEL MONEY or TIGO CASH</h6>
                                <div className="tigocash-form col-md-10 col-lg-7 mx-auto mt-4">                             
                                    <TextField id="tigo-cash-number" className="w-100" onChange={handleChange("tigoCashNumber")} label="PHONE NUMBER" variant="outlined" />
                                    
                                    <FormControl className="w-100 mt-4" variant="outlined">
                                    <InputLabel htmlFor="tigo-cash-pin">ACCOUNT PIN</InputLabel>
                                    <OutlinedInput id="tigo-cash-pin" type={values.showPin ? 'text' : 'password'} value={values.tigoCashPin} onChange={handleChange('tigoCashPin')} endAdornment={
                                        <InputAdornment position="end"> <IconButton aria-label="toggle PIN visibility" onClick={handleClickShowPin} onMouseDown={handleMouseDownPin} edge="end"> {values.showPin ? <Visibility /> : <VisibilityOff />}</IconButton> </InputAdornment> } labelWidth={100}/>
                                    </FormControl>
                                </div> 
                            </div>                            
                        </div>                        
                        <hr className="text-light my-4"/>
                        <div className={validationError.status ? 'text-center my-5':'d-none'}>
                            <Typography variant="h6" className="text-danger">{validationError.message}</Typography>
                        </div>
                        <div className="row">
                            <div className="col">
                                {/* <span className="font-medium text-bold">Price:4590 RWF</span> */}
                                <button className="btn btn-secondary" onClick={handleGoBack}>BACK</button>
                            </div>
                            <div className="text-right col">
                                <button className="btn btn-primary" onClick={validatePaymentInfo}>PLACE ORDER</button>
                            </div>
                        </div>
                    </div>
                </div>
            {/* </div> */}
        </div>
    )
    
}