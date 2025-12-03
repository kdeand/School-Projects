import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;

abstract class menuItem {
    private String name;
    private double price;
    public String id;

    public menuItem(String name, double price, String id) {
        this.id = id;
        this.name = name;
        this.price = price;
    }

    public String getId() { return id; }
    public void setId(String id) { this.id = id; }
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }
    public double getPrice() { return price; }
    public void setPrice(double price) { this.price = price; }

    @Override
    public String toString() {
        return "[" + id + "] \n" + name + "\nPrice: $" + price;
    }
}

class AppsAndStarters extends menuItem {
    private String isShareable;

    public AppsAndStarters(String id, String name, double price, String isShareable) {
        super(name, price, id);
        this.isShareable = isShareable;
    }

    public String getIsShareable() { return isShareable; }
    public void setIsShareable(String isShareable) { this.isShareable = isShareable; }

    @Override
    public String toString() {
        return super.toString() + "\nShareable: " + isShareable + "\n";
    }
}

class mainCourses extends menuItem {
    private double prepTime;

    public mainCourses(String id, String name, double price, double prepTime) {
        super(name, price, id);
        this.prepTime = prepTime;
    }

    public double getPrepTime() { return prepTime; }
    public void setPrepTime(double prepTime) { this.prepTime = prepTime; }

    @Override
    public String toString() {
        return super.toString() + "\nPreparation Time: " + prepTime + "\n";
    }
}

class Desserts extends menuItem {
    private String dessertType;
    private String isShareable;

    public Desserts(String id, String name, double price, String dessertType, String isShareable) {
        super(name, price, id);
        this.dessertType = dessertType;
        this.isShareable = isShareable;
    }

    public String getDessertType() { return dessertType; }
    public void setDessertType(String dessertType) { this.dessertType = dessertType; }
    public String getIsShareable() { return isShareable; }
    public void setIsShareable(String isShareable) { this.isShareable = isShareable; }

    @Override
    public String toString() {
        return super.toString() + "\nShareable: " + isShareable + "\nDessert Type: " + dessertType + "\n";
    }
}

class Beverages extends menuItem {
    private String isAlcoholic;
    private String size;

    public Beverages(String id, String name, double price, String isAlcoholic, String size) {
        super(name, price, id);
        this.isAlcoholic = isAlcoholic;
        this.size = size;
    }

    public String getIsAlcoholic() { return isAlcoholic; }
    public void setIsAlcoholic(String isAlcoholic) { this.isAlcoholic = isAlcoholic; }
    public String getSize() { return size; }
    public void setSize(String size) { this.size = size; }

    @Override
    public String toString() {
        return super.toString() + "\nAlcoholic: " + isAlcoholic + "\nSize: " + size + "\n";
    }
}

class CustomerInfo {
    private String name;
    private String address;
    private String phone;
    private String paymentMode;

    public CustomerInfo(String name, String address, String phone, String paymentMode) {
        this.name = name;
        this.address = address;
        this.phone = phone;
        this.paymentMode = paymentMode;
    }

    public String getName() { return name; }
    public void setName(String name) { this.name = name; }
    public String getAddress() { return address; }
    public void setAddress(String address) { this.address = address; }
    public String getPhone() { return phone; }
    public void setPhone(String phone) { this.phone = phone; }
    public String getPaymentMode() { return paymentMode; }
    public void setPaymentMode(String paymentMode) { this.paymentMode = paymentMode; }

    @Override
    public String toString() {
        return "Name: " + name + "\nAddress: " + address + "\nPhone: " + phone + "\nPayment Mode: " + paymentMode;
    }
}


public class DuckBistro {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int choice = 0;
        //list menu
        //couldve made this into a file,,
        List<menuItem> menu = new ArrayList<>();
        menu.add(new AppsAndStarters("A1", "Nachos", 180.0, "Yes"));
        menu.add(new AppsAndStarters("A2", "Buffalo Wings", 220.0, "No"));
        menu.add(new AppsAndStarters("A3", "Garlic Bread", 150.0, "Yes"));
        menu.add(new AppsAndStarters("A4", "Mozzarella Sticks", 200.0, "No"));

        menu.add(new mainCourses("M1", "Steak", 550.0, 25));
        menu.add(new mainCourses("M2", "Pizza Napoletana", 480.0, 20));
        menu.add(new mainCourses("M3", "Chicken Alfredo", 400.0, 18));
        menu.add(new mainCourses("M4", "Beef Burger", 350.0, 15));

        menu.add(new Desserts("D1", "Tiramisu", 160.0, "Cake", "Yes"));
        menu.add(new Desserts("D2", "Chocolate Lava Cake", 160.0, "Cake", "No"));
        menu.add(new Desserts("D3", "Ice Cream Sundae", 130.0, "Frozen", "Yes"));
        menu.add(new Desserts("D4", "Fruit Salad", 120.0, "Fresh", "Yes"));

        menu.add(new Beverages("B1", "Iced Tea", 90.0, "No", "Medium"));
        menu.add(new Beverages("B2", "Lemonade", 80.0, "No", "Large"));
        menu.add(new Beverages("B3", "Coffee", 100.0, "Yes", "Small"));
        menu.add(new Beverages("B4", "Milkshake", 150.0, "Yes", "Large"));

        
        List<menuItem> cart = new ArrayList<>();

        System.out.println("Welcome to Duck Bistro Online Menu");
        System.out.println("Are you a user or an admin?");
        System.out.print("Enter 'user' or 'admin': ");

        //for user input of username
        String role = sc.nextLine().trim().toLowerCase();

        String userName = "";

        if (role.equals("user")) {
            System.out.print("Enter your name: ");
            userName = sc.nextLine().trim();
            System.out.println("Hello, " + userName + "! You can now browse the menu and add items to your cart.");

        } else if (role.equals("admin")) {
            System.out.println("Welcome admin! You can view history records.");

        } else {
            System.out.println("Invalid input. Please restart and enter either 'user' or 'admin'.");
            System.exit(0);
        }

        do {
            System.out.println("\nWhat would you like to do?");

            
            String[] menuChoice = {
                "1. See Menu",
                "2. Add to cart",
                "3. Delete from cart",
                "4. Discard",
                "5. Checkout",
                "6. View Cart"
            };

            
            for (String opt : menuChoice) System.out.println(opt);

            if (role.equals("admin")) {
                    System.out.println("7. View Order History");
                    System.out.println("8. Delete an Order from History");
                }
            try {
                System.out.print("Input your choice: ");
                choice = sc.nextInt();
                sc.nextLine(); 
            } catch (InputMismatchException e) {
                sc.nextLine();
                System.out.println("Input a valid number.");
                continue;
            }

            switch (choice) {
                case 1: //display
                    displayByCategory(menu, sc);
                    break;
                case 2: //addtocart
                    displayByCategory(menu, sc); 
                    addToCart(menu, sc, cart);
                    break;
                case 3: //deletefromcart
                    deleteFromCart(cart, sc);
                    break;
                case 4: //discard cart
                    if (cart.isEmpty()) {
                        System.out.println("Your cart is already empty.");
                    } else {
                        System.out.print("This will empty your cart. Are you sure? (Y/N): ");
                        String confirm = sc.nextLine().trim();
                        if (confirm.equalsIgnoreCase("Y")) {
                            cart.clear();
                            try {
                                new FileWriter("cart.txt", false).close(); 
                                System.out.println("Cart discarded and cart.txt emptied.");
                            } catch (IOException e) {
                                System.out.println("Error clearing cart.txt: " + e.getMessage());
                            }
                        } else {
                            System.out.println("Action cancelled. Returning to main menu...");
                        }
                    }
                    break;
                

                case 5: //checkout, make it a method
                    if (cart.isEmpty()) {
                        System.out.println("Your cart is empty. Nothing to checkout.");
                    } else {
                        
                        double total = calculateTotal(cart);
                        
                        System.out.println("\n--- Receipt ---");
                        for (menuItem item : cart) {
                            System.out.println(item.getName() + " - $" + item.getPrice());
                        }
                        System.out.println("Total: $" + total);
                        System.out.println("---------------");

                        System.out.print("Enter your address: ");
                        String address = sc.nextLine().trim();
                        System.out.print("Enter your phone number: ");
                        String phone = sc.nextLine().trim();

                        String paymentMode = "";
                        while (true) {
                            System.out.print("Enter payment mode (COD/Cash on Delivery, Credit Card, GCash): ");
                            paymentMode = sc.nextLine().trim();
                            if (paymentMode.equalsIgnoreCase("COD") || paymentMode.equalsIgnoreCase("Cash on Delivery") ||
                                paymentMode.equalsIgnoreCase("Credit Card") || paymentMode.equalsIgnoreCase("GCash")) {
                                break;
                            } else {
                                System.out.println("Invalid payment mode. Please choose from COD, Cash on Delivery, Credit Card, or GCash.");
                            }
                        }

                        CustomerInfo customer = new CustomerInfo(userName, address, phone, paymentMode);
                   
                        System.out.println("Proceeding to checkout...");
                     
                        try (BufferedWriter writer = new BufferedWriter(new FileWriter("history.txt", true))) {
                            writer.write("Customer Info:\n" + customer.toString() + "\n");
                            writer.write("\nItems:\n");
                            for (menuItem item : cart) {
                                writer.write(item.toString() + "\n");
                            }
                            writer.write("Total: $" + total + "\n");
                            writer.write("----------------------\n");
                            System.out.println("Order saved to history.");
                        } catch (IOException e) {
                            System.out.println("Error saving to history: " + e.getMessage());
                        }
                      
                        //clear cart.txt
                        cart.clear();

                        try {
                            new FileWriter("cart.txt", false).close(); 
                        } catch (IOException e) {
                            System.out.println("Error clearing cart.txt: " + e.getMessage());
                        }
                        System.out.println("Checkout complete. Thank you!");
                        choice = 5; 
                    }
                    break;

                case 6: //delete cart
                    if (cart.isEmpty()) {
                        System.out.println("Your cart is empty.");
                    } else {
                        System.out.println("\nYour Cart:");
                        for (menuItem item : cart) {
                            System.out.println(item);
                        }
                        double total = calculateTotal(cart);
                        System.out.println("Total: $" + total);
                    }
                    break;

                    case 7: //view client history
                        if (role.equals("admin")) adminViewHistory();
                        else System.out.println("Unauthorized.");
                        break;

                    case 8: //delete client
                        if (role.equals("admin")) adminDeleteFromHistory(sc);
                        else System.out.println("Unauthorized.");
                        break;
                                    default:
                                        System.out.println("Invalid choice.");
                                }
                            } while (choice != 5);

                            sc.close();
                        }

    public static void displayByCategory(List<menuItem> menu, Scanner sc) {
        String[] menuTypes = {
            "1. Appetizers and Starters",
            "2. Main Courses",
            "3. Desserts",
            "4. Beverages"
        };

        System.out.println("\nMenu Categories:");
        for (String type : menuTypes) System.out.println(type);

        System.out.print("\nSelect a category (1-4): ");
        int categoryChoice = 0;
        try {
            categoryChoice = sc.nextInt();
        } catch (InputMismatchException e) {
            sc.nextLine(); 
            System.out.println("Invalid input, defaulting to 1.");
            categoryChoice = 1;
        }

        System.out.println("\n--- Items ---");
        for (menuItem item : menu) {

            //for categorized 
            if ((categoryChoice == 1 && item instanceof AppsAndStarters) ||
                (categoryChoice == 2 && item instanceof mainCourses) ||
                (categoryChoice == 3 && item instanceof Desserts) ||
                (categoryChoice == 4 && item instanceof Beverages)) {
                System.out.println(item);
            }
        }
    }

    public static void addToCart(List<menuItem> menu, Scanner sc, List<menuItem> cart) {
        System.out.println("\nEnter the ID of the item you want to add to cart (type 'done' to finish):");
        while (true) {
            System.out.print("Item ID: ");
            String inputId = sc.next();

            if (inputId.equalsIgnoreCase("done")) {
                System.out.println("Finished adding to cart.");
                break;
            }

            boolean found = false;
            for (menuItem item : menu) {
                if (item.getId().equalsIgnoreCase(inputId)) {
                    found = true;
                    cart.add(item); 
                    try (BufferedWriter writer = new BufferedWriter(new FileWriter("cart.txt", true))) {
                        writer.write(item.toString());
                        writer.write("\n----------------------\n");
                        System.out.println(item.getName() + " added to cart!");
                    } catch (IOException e) {
                        System.out.println("Error writing to cart file: " + e.getMessage());
                    }
                    break;
                }
            }

            if (!found) System.out.println("Item ID not found. Try again.");
        }
    }

    //delete from cart
    public static void deleteFromCart(List<menuItem> cart, Scanner sc) {
        if (cart.isEmpty()) {
            System.out.println("Cart is empty.");
            return;
        }
        System.out.println("\nYour Cart:");
        for (int i = 0; i < cart.size(); i++) {
            System.out.println((i + 1) + ". " + cart.get(i).getName() + " [" + cart.get(i).getId() + "]");
        }
        System.out.print("Enter the ID of the item to remove: ");
        String idToRemove = sc.nextLine().trim();
        boolean removed = cart.removeIf(item -> item.getId().equalsIgnoreCase(idToRemove));
        if (removed) {
            System.out.println("Item removed from cart.");
            
            try (BufferedWriter writer = new BufferedWriter(new FileWriter("cart.txt", false))) {
                for (menuItem item : cart) {
                    writer.write(item.toString());
                    writer.write("\n----------------------\n");
                }
            } catch (IOException e) {
                System.out.println("Error updating cart.txt: " + e.getMessage());
            }
        } else {
            System.out.println("Item not found in cart.");
        }
    }


    public static double calculateTotal(List<menuItem> cart) {
        double total = 0;
        for (menuItem item : cart) {
            total += item.getPrice();
        }
        return total;
    }

    public static void adminViewHistory() {
    try {

        //java.nio.file.path for getting directory of history.txt
        java.nio.file.Path path = java.nio.file.Paths.get("history.txt");

        if (!java.nio.file.Files.exists(path)) {
            System.out.println("history.txt does not exist.");
            return;
        }

        System.out.println("\n--- ORDER HISTORY ---");
        String content = java.nio.file.Files.readString(path); //read contents from dir

        if (content.trim().isEmpty()) {
            System.out.println("History is empty.");
        } else {
            System.out.println(content);
        }

        System.out.println("----------------------");

    } catch (IOException e) {
        System.out.println("Error reading file: " + e.getMessage());
    }
}

public static void adminDeleteFromHistory(Scanner sc) {
    try {
        java.nio.file.Path path = java.nio.file.Paths.get("history.txt");

        if (!java.nio.file.Files.exists(path)) {
            System.out.println("No history found.");
            return;
        }

        List<String> lines = java.nio.file.Files.readAllLines(path);
        List<String> orders = new ArrayList<>();
        StringBuilder sb = new StringBuilder();

        for (String line : lines) { //split the file based on order
            //if line reads the separator -> sb stores order, sb(0) deletes the content of sb
            if (line.equals("----------------------")) {
                orders.add(sb.toString());
                sb.setLength(0);
            } else {
                //if line is not the operator, it prints as it is a part of the order
                sb.append(line).append("\n");
            } 
        }

        if (orders.isEmpty()) {
            System.out.println("History is empty.");
            return;
        }

        //display orders
        System.out.println("\n--- ORDER LIST ---");
        for (int i = 0; i < orders.size(); i++) {
            System.out.println("ORDER #" + (i + 1));
            System.out.println(orders.get(i));
            System.out.println("----------------------");
        }

        System.out.print("Enter the order number to delete: ");
        int num;

        try {
            num = sc.nextInt();
            sc.nextLine();
        } catch (InputMismatchException e) {
            sc.nextLine();
            System.out.println("Invalid number.");
            return;
        }

        //couldv be under an exception
        if (num < 1 || num > orders.size()) {
            System.out.println("Invalid order number.");
            return;
        }
        orders.remove(num - 1);

        try (BufferedWriter writer = new BufferedWriter(new FileWriter("history.txt"))) {
            for (String order : orders) {
                writer.write(order);
                writer.write("----------------------\n");
            }
        }
        System.out.println("Order deleted successfully.");
    } catch (IOException e) {
        System.out.println("Error updating history: " + e.getMessage());
    }
}

}
