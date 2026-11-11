DELETE FROM Sales_Order
WHERE Product_no IN (
    SELECT Product_no
    FROM Products_Master
    WHERE Sell_price BETWEEN 1000 AND 10000
);
DELETE FROM Products_Master
WHERE Sell_price BETWEEN 1000 AND 10000;
