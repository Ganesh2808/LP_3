// SPDX-License-Identifier: MIT
pragma solidity >=0.7.0 <0.9.0;
contract studentmarks{
    struct student{
        int id;
        string fname;
        string lname;
        int marks;
    }

    address owner;
    int public stdcount=0;

    mapping (int=>student) public std;

    modifier onlyOwner(){
        owner=msg.sender;
        _;
    }
    constructor(){
        owner=msg.sender;
    }

    function addRecords(int id,string memory fname,string memory lname,int marks) public onlyOwner{
        require(std[id].id == 0, "Student with this ID already exists");
        stdcount=stdcount+1;
        std[id]=student(id,fname,lname,marks);
    }
}