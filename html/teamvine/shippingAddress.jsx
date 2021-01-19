import React from 'react';
import TextField from '@material-ui/core/TextField';
import MenuItem from '@material-ui/core/MenuItem';
import Typography from '@material-ui/core/Typography';

export default function ShippingAddress({setMyData}){ 
    const [provinces,setProvinces] = React.useState([])
    const [districts,setDistricts] = React.useState([])
    const [zones,setZones] = React.useState([])

    const [values, setValues] = React.useState({ 
        province:'',
        district:'',
        zone:''
    })

    const validateShippingAddress = () =>{
        handleSend()
    }

    const handleSend = () => {
        setMyData({
            province:values.province,
            district:values.district,
            zone:values.zone
        })
    }

    const handleChange = (prop) => (event) => {
        setValues({ ...values, [prop]: event.target.value });
    };
    const handleGoBack = () =>{
        setMyData({
            province:values.province,
            district:values.district,
            zone:values.zone,
            goBack:true
        })
    }

    return (<div className="shippingAdress">
        <form autoComplete="off">
            <Typography className="text-center mt-2 text-gray" variant="h5">SHIPPING ADDRESS</Typography>
            <div className="py-3 px-5 col-md-7 mx-auto">
                <TextField id="selectProvince" select label="Province" className="w-100 mt-3" value={provinces} onChange={handleChange}
                    SelectProps={{  native: true, }} variant="outlined" >
                    {provinces.map((option) => (
                    <option key={option.value} value={option.value}>
                        {option.label}
                    </option>
                    ))}
                </TextField>
                
                <TextField id="selectdistrict" select label="District"  className="w-100 mt-3" value={districts} onChange={handleChange}
                    SelectProps={{  native: true, }} variant="outlined" >
                    {districts.map((option) => (
                    <option key={option.value} value={option.value}>
                        {option.label}
                    </option>
                    ))}
                </TextField>
                
                <TextField id="selectzone" select label="Select Zone" value={zones} className="w-100 mt-3"  onChange={handleChange}
                    SelectProps={{  native: true, }} variant="outlined" >
                    {zones.map((option) => (
                    <option key={option.value} value={option.value}>
                        {option.label}
                    </option>
                    ))}
                </TextField>        
                <div className="row mt-5">
                    <div className="col">
                        <button className="btn btn-secondary" disabled onClick={handleGoBack}>BACK</button>
                    </div>
                    <div className="text-right col">
                        <button className="btn btn-primary" onClick={validateShippingAddress}>CONTINUE</button>
                    </div>        
                </div>
            </div>
        </form>
    </div>
)
}