product ={
    "name":"Apple 16",
    "brand":"Apple",
    "release_date":"12/9/2024",
    "os_type":"IOS",
    "company":"Apple.ltd"
}
def print_product_details(msg,product):
    print(msg)
    for k in product.keys():
        print(k+":"+product[k])
    print()

print_product_details("Product Details :",product)

product['price'] = "$59000"

print_product_details("Product Details After updating price :",product)

product['name'] = "Apple 16 pro max"

print_product_details("Product Details After updating name :",product)

del product['company']

print_product_details("Product Details After delating company :",product)
