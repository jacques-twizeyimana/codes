DELIMITER //
CREATE FUNCTION fibonnacci(n INT) RETURNS INT
BEGIN
IF n == 0 || n == 1 THEN RETURN 1
else
RETURN fibonnacci(n -1 ) + fibonnacci(n-2)
END//
DELIMITER ;


DELIMITER $$

CREATE FUNCTION fibonnacci(
	n INT(3)
) 
RETURNS INT(3)
DETERMINISTIC
BEGIN
    DECLARE customerLevel VARCHAR(20);

    IF credit > 50000 THEN
		SET customerLevel = 'PLATINUM';
    ELSEIF (credit >= 50000 AND 
			credit <= 10000) THEN
        SET customerLevel = 'GOLD';
    ELSEIF credit < 10000 THEN
        SET customerLevel = 'SILVER';
    END IF;
	-- return the customer level
	RETURN (customerLevel);
END$$
DELIMITER ;