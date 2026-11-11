CREATE TABLE Client_Master (
    Client_no VARCHAR2(5),
    Name VARCHAR2(20) CONSTRAINT CM_NAME_NN NOT NULL,
    Address1 VARCHAR2(30),
    State VARCHAR2(30),
    City VARCHAR2(15),

    CONSTRAINT CM_PK PRIMARY KEY (Client_no),
    CONSTRAINT CM_NO_CK CHECK (Client_no LIKE 'C%'),
    CONSTRAINT CM_NAME_UK UNIQUE (Name),
    CONSTRAINT CM_CITY_CK CHECK (City IN ('Delhi','Mumbai','Chennai'))
);
INSERT INTO Client_Master VALUES ('C01','Ivaan','Church Rd','Maharashtra','Mumbai');

INSERT INTO Client_Master VALUES ('C02','Vandana','St.Mary Rd','Tamil Nadu','Chennai');

INSERT INTO Client_Master VALUES ('C03','Pramada','Mall Rd','Maharashtra','Mumbai');

INSERT INTO Client_Master VALUES ('C04','Basu','Church Rd','Maharashtra','Mumbai');

INSERT INTO Client_Master VALUES ('C05','Ravi','Chandni',NULL,'Delhi');

INSERT INTO Client_Master VALUES ('C06','Rukmini','Mall Rd','Maharashtra','Mumbai');
CREATE TABLE Products_Master (
    Product_no VARCHAR2(10),
    Description VARCHAR2(20) CONSTRAINT PM_DESC_NN NOT NULL,
    Qty_on_hand NUMBER(8),
    Sell_price NUMBER(8,2) CONSTRAINT PM_SELL_NN NOT NULL,
    Cost_price NUMBER(8,2) CONSTRAINT PM_COST_NN NOT NULL,

    CONSTRAINT PM_PK PRIMARY KEY (Product_no),
    CONSTRAINT PM_NO_CK CHECK (Product_no LIKE 'P%'),
    CONSTRAINT PM_DESC_UK UNIQUE (Description),
    CONSTRAINT PM_QTY_CK CHECK (Qty_on_hand > 10)
);
INSERT INTO Products_Master VALUES ('P01','1.44 Floppies',100,525,500);

INSERT INTO Products_Master VALUES ('P02','Monitors',25,12000,11280);

INSERT INTO Products_Master VALUES ('P03','Mouse',20,1050,1000);

INSERT INTO Products_Master VALUES ('P04','1.22 Floppies',100,525,500);

INSERT INTO Products_Master VALUES ('P05','Keyboards',15,3150,3050);

INSERT INTO Products_Master VALUES ('P06','Cd drive',14,5250,5100);
CREATE TABLE Sales_Order (
    S_order_no VARCHAR2(10),
    S_order_date DATE,
    Client_no VARCHAR2(5),
    Salesman_no VARCHAR2(10),
    Product_no VARCHAR2(10),

    CONSTRAINT SO_PK PRIMARY KEY (S_order_no),
    CONSTRAINT SO_NO_CK CHECK (S_order_no LIKE 'O%'),
    CONSTRAINT SO_SMAN_CK CHECK (Salesman_no LIKE 'S%'),
    CONSTRAINT SO_CLIENT_FK FOREIGN KEY (Client_no)
        REFERENCES Client_Master(Client_no),
    CONSTRAINT SO_PRODUCT_FK FOREIGN KEY (Product_no)
        REFERENCES Products_Master(Product_no)
);
INSERT INTO Sales_Order VALUES ('O19001',TO_DATE('12-JAN-1996','DD-MON-YYYY'),'C01','S01','P01');

INSERT INTO Sales_Order VALUES ('O19002',TO_DATE('25-JAN-1996','DD-MON-YYYY'),'C02','S02','P02');

INSERT INTO Sales_Order VALUES ('O19003',TO_DATE('18-FEB-1996','DD-MON-YYYY'),'C03','S03','P03');

INSERT INTO Sales_Order VALUES ('O19004',TO_DATE('03-APR-1996','DD-MON-YYYY'),'C01','S01','P04');

INSERT INTO Sales_Order VALUES ('O19005',TO_DATE('20-MAY-1996','DD-MON-YYYY'),'C04','S02','P05');

INSERT INTO Sales_Order VALUES ('O19006',TO_DATE('24-MAY-1996','DD-MON-YYYY'),'C05','S04','P06');

COMMIT;
