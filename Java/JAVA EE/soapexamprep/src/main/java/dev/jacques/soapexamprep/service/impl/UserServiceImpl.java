package dev.jacques.soapexamprep.service.impl;
import dev.jacques.soapexamprep.beans.User;
import dev.jacques.soapexamprep.repositories.UserRepository;
import org.springframework.stereotype.Service;

@Service
public class UserServiceImpl{

    private UserRepository userRepository;

    public User getUserByName(String username){
        return userRepository.findByFirstName(username);
    }
    public User findUserById(int userId){
        return userRepository.findById(userId);
    }

}
