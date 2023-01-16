const products = [
    {
        name: "Product 1",
        price: 19.99
    },
    {
        name: "Product 2",
        price: 9.99
    },
    {
        name: "Product 3",
        price: 29.99
    }
];

// Function to generate HTML for a product
function generateProductHTML(product) {
    return `
        <div class="product">
            <div class="product-name">${product.name}</div>
            <div class="product-price">${product.price}</div>
        </div>
    `;
}

// Function to insert products into the product list
function insertProductsIntoPage() {
    const productList = document.getElementById("product-list");
    products.forEach(product => {
        productList.innerHTML += generateProductHTML(product);
    });
}

insertProductsIntoPage();
//create an array of 5 names



