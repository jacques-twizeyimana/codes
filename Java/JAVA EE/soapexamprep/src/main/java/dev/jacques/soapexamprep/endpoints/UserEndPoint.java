package dev.jacques.soapexamprep.endpoints;

import dev.jacques.soapexamprep.beans.User;
import dev.jacques.soapexamprep.service.impl.UserServiceImpl;
import dev.jacques.user.GetUserRequest;
import dev.jacques.user.GetUserResponse;
import org.springframework.ws.server.endpoint.annotation.Endpoint;
import org.springframework.ws.server.endpoint.annotation.PayloadRoot;
import org.springframework.ws.server.endpoint.annotation.RequestPayload;
import org.springframework.ws.server.endpoint.annotation.ResponsePayload;

@Endpoint
public class UserEndPoint {
    UserServiceImpl userService = new UserServiceImpl();
    public UserEndPoint() {
    }

    @PayloadRoot(
            namespace = "http://jacques.dev/user",
            localPart = "GetUserRequest"
    )
    @ResponsePayload
    public GetUserResponse findUser(@RequestPayload GetUserRequest request){
        GetUserResponse response= new GetUserResponse();

        User userFound = userService.findUserById(request.getId());

        dev.jacques.user.User userResp = new dev.jacques.user.User();
        userResp.setId(userFound.getId());
        userResp.setEmail(userFound.getEmail());
        userResp.setFirstName(userFound.getLastName());
        userResp.setLastName(userFound.getLastName());

        response.setUser(userResp);
        return response;
    }
}
