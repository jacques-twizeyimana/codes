package dev.jacques.soapexamprep.repositories;
import dev.jacques.soapexamprep.beans.User;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

@Repository
public interface UserRepository extends JpaRepository<User,Long> {

    User findByFirstName(String firstName);
    User findById(int id);

}

