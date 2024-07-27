# Gym Database App

## About
This project is a C++ Gym Database Application designed to manage and track gym members and their memberships efficiently. The application organizes data across three primary tables, facilitating easy access and manipulation of gym-related information.

## Purpose of the Project
The main goal of this project is to create a comprehensive tool for managing gym membership data. It aims to provide a clear and structured approach to handling member details and membership types, enhancing the overall management of gym operations.

## Features
### Core Tables
- **Gym Users Table**:
  - **ID**: Unique identifier for each gym member.
  - **Membership Type**: Indicates the type of membership a user holds (Weekly, Monthly, Yearly).
  - **First Name**: Member's first name.
  - **Last Name**: Member's last name.

- **Membership Types Table**:
  - **ID**: Numerical identifier for membership types (1 = Weekly, 2 = Monthly, 3 = Yearly).
  - **Membership Type**: Description of the membership type corresponding to the ID.

- **Summary Table**:
  - **ID**: Total IDs of gym members.
  - **Membership Type**: Types of memberships associated with those IDs.
  - **First Name**: Members' first names.
  - **Last Name**: Members' last names.

### Navigator Palette
- Provides functions for managing gym member data, including:
  - **Addition**: Add new members or membership types.
  - **Subtraction**: Remove existing members or membership types.
  - **Edit**: Modify details of existing entries.

## Instructions
1. **Access Tables**:
   - View and interact with the Gym Users Table and Membership Types Table.
   
2. **Manage Data**:
   - Use the navigator palette for adding or removing members and membership types.
   
3. **View Summary**:
   - Access the Summary Table to see a consolidated view of gym member information and their membership details.

### Menu Options
- **Add Member**:
  - Enter member details and assign a membership type.
  
- **Remove Member**:
  - Select a member to remove from the database.
  
- **Update Member Information**:
  - Modify existing member details or membership types.
  
- **Add Membership Type**:
  - Define new membership types.

- **Remove Membership Type**:
  - Delete existing membership types.

## Example Usage
- **Adding a New Member**:
  - Enter member details: ID: `1001`, First Name: `John`, Last Name: `Doe`, Membership Type: `Monthly`.
  - The member is added to the Gym Users Table with the relevant details.

- **Removing a Membership Type**:
  - Select Membership Type ID: `2` (Monthly).
  - The Monthly membership type is removed from the Membership Types Table.

## Conclusion
This C++ Gym Database App provides a structured and user-friendly solution for managing gym membership data. By organizing information into clear tables and offering intuitive management functions, the application supports efficient and effective gym operations.

[YouTube video link for the Gym Database Project](https://youtu.be/ON8_7b_R4Mo?si=saHk7fQ8noeRWZjE)

This video offers a concise and clear overview of your Gym Database Project, reflecting the simplicity and functionality of the application.



---
