import React, { useState } from 'react';
import Stepper from '@material-ui/core/Stepper';
import Step from '@material-ui/core/Step';
import StepLabel from '@material-ui/core/StepLabel';
import Typography from '@material-ui/core/Typography';
import ShippingAddress from './shippingAddress';
import PaymentMethods from './payment-method';
import { Image } from 'react-bootstrap';

function getSteps() {
  return ['Choose shipping address', 'Choose payment method', 'Finish the order'];
}

export default function ProceedOrder() {
  const [activeStep, setActiveStep] = React.useState(0);
  const steps = getSteps();
  const [readMore,setReadMore] = React.useState(0)

  const [orderedProducts,setOrderedProducts] = React.useState([])

  React.useEffect(()=>{
    getOrderedProducts()
  },[])

  const getOrderedProducts = ()=>{
    setOrderedProducts([
      {
        name:"Durostar DS4000S Portable Generator",
        image:"https://images-na.ssl-images-amazon.com/images/I/71eXBBYjImL._AC_SL1200_.jpg",
        code: 202023,
        price:45000,
        description:`POWERFUL DUROSTAR ENGINE: The DS4000S is powered by a DuroStar 7 HP 208cc OHV engine with automatic low oil shutoff; Fuel Capacity: 3.96 Gallons; Noise Level: 69dB
        PLENTY OF POWER: With 4,000 peak watts and 3,300 running watts, this unit is a workhorse that provides plenty of power to handle multiple jobs from powering high voltage appliances to heavy duty power tools
        POWER PANEL: Includes a selection of outlets for maximum compatibility in your applications including: 2 120V household outlets and 1 120V 30A twist lock outlet; Also includes a voltmeter for measuring voltage output
        POWERING EVERYONE ANYWHERE: Like all DuroStar generators, the DS4000S is EPA and CARB approved for use in all 50 states
        WHAT'S IN THE BOX: DuroStar DS4000S Generator, Oil Funnel, Sparkplug Wrench, Tool Set and Owner's Manual`,
        quantity:5,
      },
      {
        name:"Durostar DS4000S Portable Generator",
        image:"https://images-na.ssl-images-amazon.com/images/I/71eXBBYjImL._AC_SL1200_.jpg",
        code: 202024,
        price:45000,
        description:`POWERFUL DUROSTAR ENGINE: The DS4000S is powered by a DuroStar 7 HP 208cc OHV engine with automatic low oil shutoff; Fuel Capacity: 3.96 Gallons; Noise Level: 69dB
        PLENTY OF POWER: With 4,000 peak watts and 3,300 running watts, this unit is a workhorse that provides plenty of power to handle multiple jobs from powering high voltage appliances to heavy duty power tools
        POWER PANEL: Includes a selection of outlets for maximum compatibility in your applications including: 2 120V household outlets and 1 120V 30A twist lock outlet; Also includes a voltmeter for measuring voltage output
        POWERING EVERYONE ANYWHERE: Like all DuroStar generators, the DS4000S is EPA and CARB approved for use in all 50 states
        WHAT'S IN THE BOX: DuroStar DS4000S Generator, Oil Funnel, Sparkplug Wrench, Tool Set and Owner's Manual`,
        quantity:5,
      },
      {
        name:"Durostar DS4000S Portable Generator",
        image:"https://images-na.ssl-images-amazon.com/images/I/71eXBBYjImL._AC_SL1200_.jpg",
        code: 202025,
        price:45000,
        description:`POWERFUL DUROSTAR ENGINE: The DS4000S is powered by a DuroStar 7 HP 208cc OHV engine with automatic low oil shutoff; Fuel Capacity: 3.96 Gallons; Noise Level: 69dB
        PLENTY OF POWER: With 4,000 peak watts and 3,300 running watts, this unit is a workhorse that provides plenty of power to handle multiple jobs from powering high voltage appliances to heavy duty power tools
        POWER PANEL: Includes a selection of outlets for maximum compatibility in your applications including: 2 120V household outlets and 1 120V 30A twist lock outlet; Also includes a voltmeter for measuring voltage output
        POWERING EVERYONE ANYWHERE: Like all DuroStar generators, the DS4000S is EPA and CARB approved for use in all 50 states
        WHAT'S IN THE BOX: DuroStar DS4000S Generator, Oil Funnel, Sparkplug Wrench, Tool Set and Owner's Manual`,
        quantity:5,
      },
      {
        name:"Durostar DS4000S Portable Generator",
        image:"https://images-na.ssl-images-amazon.com/images/I/71eXBBYjImL._AC_SL1200_.jpg",
        code: 202026,
        price:45000,
        description:`POWERFUL DUROSTAR ENGINE: The DS4000S is powered by a DuroStar 7 HP 208cc OHV engine with automatic low oil shutoff; Fuel Capacity: 3.96 Gallons; Noise Level: 69dB
        PLENTY OF POWER: With 4,000 peak watts and 3,300 running watts, this unit is a workhorse that provides plenty of power to handle multiple jobs from powering high voltage appliances to heavy duty power tools
        POWER PANEL: Includes a selection of outlets for maximum compatibility in your applications including: 2 120V household outlets and 1 120V 30A twist lock outlet; Also includes a voltmeter for measuring voltage output
        POWERING EVERYONE ANYWHERE: Like all DuroStar generators, the DS4000S is EPA and CARB approved for use in all 50 states
        WHAT'S IN THE BOX: DuroStar DS4000S Generator, Oil Funnel, Sparkplug Wrench, Tool Set and Owner's Manual`,
        quantity:5,
      },
    ])
  }

  const handleNext = () => {
    setActiveStep((prevActiveStep) => prevActiveStep + 1);
  };

  const handleBack = () => {
    setActiveStep((prevActiveStep) => prevActiveStep - 1);
  };

  const finishOrder = () =>{
    console.log('done')
  }

  const [shippingAddress, setShippingAddress] = useState({
    province: "",
    district: "",
    zone: ""
  })

  const handleSetShippingAddress = (my_data) => {
    if(my_data.goBack ) handleBack()
    else {
      setShippingAddress(my_data)
      handleNext()
    }
  }

  const [paymentInfo, setPaymentInfo] = useState({
    cardHolder: '',
    cardNumber: '',
    cardExpDate: '',
    cardCvv: '',
    momoNumber:'',
    momoPin:'',
    tigoCashNumber:'',
    tigoCashPin:'',
  })

  const handleSetPaymentInfo= (my_data) => {
    if(my_data.goBack ) handleBack()
    else {
      setPaymentInfo(my_data)
      handleNext()
    }
  }

console.log(`this order is being shipped to ${shippingAddress.province} - ${shippingAddress.district} - ${shippingAddress.zone}`)
console.log(`this order will be payed using ${paymentInfo}`)
  function GetStepContent(stepIndex) {
  switch (stepIndex) {
    case 0:
      return <ShippingAddress setMyData={handleSetShippingAddress}/>
    case 1:
      return <PaymentMethods setMyData={handleSetPaymentInfo}/>
    case 2:
      return <div className="bg-light p-md-5">
        <div className="bg-white col-md-10 mx-auto my-2 py-3">
          <h3 className="text-left py-2 mb-4" variant="h4">Order $ummary</h3>
          <hr className="text-gray"/>
          <div className="row mt-4">
            <div className="col">
            <h6 className="text-left">Subtotal</h6>
            </div>
            <div className="col">
              <h6 className="text-right">3000 RWF</h6>
            </div>
          </div>
          <div className="row">
            <div className="col">
            <h6 className="text-left">Shipping</h6>
            </div>
            <div className="col">
              <h6 className="text-right">700 RWF</h6>
            </div>
          </div>
          <div className="row">
            <div className="col">
              <h6 className="text-left">Estimated tax</h6>
            </div>
            <div className="col">
              <h6 className="text-right">1300 RWF</h6>
            </div>
          </div>
          <hr className="text-gray w-100"/>
          <div className="row">              
            <div className="col">
              <h6 className="text-left">Estimated total</h6>
            </div>
            <div className="col">
              <h6 className="text-right">43000 RWF</h6>
            </div>
          </div>
          <Typography className="my-3 text-gray">By placing this order you agree to our terms of service and privacy policy</Typography>
          <div className="text-center">
            <button className="btn btn-primary btn-lg" onClick={finishOrder()}>PLACE ORDER</button>
          </div>
        </div>
        <div className="bg-white col-md-10 mx-auto my-3 py-3">
          <Typography className="text-bold mb-4" variant="h4">Delivery</Typography>
          <hr className="text-gray w-100"/>
          <div className="ordered-products mt-4">
          {orderedProducts.map(product => (
            <div className="ordered-product row">
              <div className="col-sm-6 col-md-4">
                <Image className="d-block" style={{maxWidth:"100%"}} src={product.image} alt="product image" />
              </div>
              <div className="col-sm-6 col-md-4">
                <h6>{product.name}</h6>
                <Typography className="mt-2">Part code: {product.code}</Typography>
                <Typography className="mt-2 mb-2">Unit Price:<b>{product.price} RWF</b></Typography>
                <h6>Part description:</h6>
                <Typography className="text-gray">{readMore !== product.code ? product.description.substring(0,50) : product.description} {readMore !== product.code ? <span href='#' className="ml-3 likeLink" onClick={()=>{setReadMore(product.code)}}>See more</span> : <span  className="ml-3 likeLink"  onClick={()=>{setReadMore()}}>See less</span>} </Typography>

                <Typography className="my-2">Quantity:<b>{product.quantity}</b></Typography>
                <Typography className="mb-2">Total price for this product:<b>{product.quantity * product.price} RWF</b> </Typography>
              </div>
              <hr className="text-gray w-100"/>
            </div>
          ))}
          </div>
          <div className="row">
              <div className="col">
                <button className="btn btn-secondary" onClick={handleBack}>BACK</button>
              </div>
              <div className="text-right col">
                <button className="btn btn-primary" onClick={finishOrder}>PLACE ORDER</button>
              </div>
          </div>
        </div>
        
        {/* <div className="py-3 px-5 col-md-7 mx-auto"> */}
          
        </div>
    default:
      return 'Unknown stepIndex';
  }
}

  return (
    <div className="proceedPage" id="proceedPage">
        <div className="container bg-white p-md-5">
      <Stepper activeStep={activeStep} alternativeLabel>
        {steps.map((label) => (
          <Step key={label}>
            <StepLabel>{label}</StepLabel>
          </Step>
        ))}
      </Stepper>
      <div>
        {activeStep === steps.length ? (
          <div>
            <Typography className={''}>All steps completed</Typography>
          </div>
        ) : (
          <div>
            <Typography className={''}>{GetStepContent(activeStep)}</Typography>
          </div>
        )}
      </div>
      </div>
    </div>
  );
}
