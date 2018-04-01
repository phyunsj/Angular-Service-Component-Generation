//
// 
// PLEASE DO NOT EDIT THIS FILE. AUTO-GENERATED.
//



#define STOCK_COMPANYSYMBOL_MIN 0
#define STOCK_COMPANYSYMBOL_MAX 5
#define STOCK_COMPANYSYMBOL_DEFAULT  "S&P"
#define STOCK_COMPANYSYMBOL_VALID_FLAG   (0x1 << 0)
#define STOCK_COMPANYSYMBOL_RANGE_ERROR 306

#define STOCK_COMPANYNAME_MIN 0
#define STOCK_COMPANYNAME_MAX 255
#define STOCK_COMPANYNAME_DEFAULT  ""
#define STOCK_COMPANYNAME_VALID_FLAG   (0x1 << 1)
#define STOCK_COMPANYNAME_RANGE_ERROR 307

#define STOCK_LASTTRADEPRICEONLY_MIN 0
#define STOCK_LASTTRADEPRICEONLY_MAX 100000
#define STOCK_LASTTRADEPRICEONLY_DEFAULT 0
#define STOCK_LASTTRADEPRICEONLY_VALID_FLAG   (0x1 << 2)
#define STOCK_LASTTRADEPRICEONLY_RANGE_ERROR 308

#define STOCK_CHANGE_MIN 0
#define STOCK_CHANGE_MAX 100000
#define STOCK_CHANGE_DEFAULT 0
#define STOCK_CHANGE_VALID_FLAG   (0x1 << 3)
#define STOCK_CHANGE_RANGE_ERROR 309

#define STOCK_CHANGEINPERCENT_MIN 0
#define STOCK_CHANGEINPERCENT_MAX 100
#define STOCK_CHANGEINPERCENT_DEFAULT 0
#define STOCK_CHANGEINPERCENT_VALID_FLAG   (0x1 << 4)
#define STOCK_CHANGEINPERCENT_RANGE_ERROR 310            

class Stock {

public:

    Stock();
   ~Stock();

    
	std::string companySymbol;
	std::string companyName;
	int lastTradePriceOnly;
	int change;
	int changeInPercent;
    
	std::string db_create_stmt();
	void db_create_stmt_pre();
	std::string db_insert_stmt();
	void db_insert_stmt_pre();
	std::string db_update_stmt( const std::string key);
	void db_update_stmt_pre();
	std::string db_select_stmt( const std::vector<std::string> );
	void db_select_stmt_pre();
	std::string db_delete_stmt( const std::string key);
	void db_delete_stmt_pre();
	void SET_VALID_BIT_COMPANYSYMBOL();
	void SET_VALID_BIT_COMPANYNAME();
	void SET_VALID_BIT_LASTTRADEPRICEONLY();
	void SET_VALID_BIT_CHANGE();
	void SET_VALID_BIT_CHANGEINPERCENT();
	int rangeCheck( ) { /* not implemented */ return 300; }

private:
    
	unsigned int valid;
    
};

