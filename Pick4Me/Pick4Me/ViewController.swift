//
//  ViewController.swift
//  Pick4Me
//
//  Created by Administrator on 9/6/15.
//  Copyright (c) 2015 oncloudcal.com. All rights reserved.
//

import UIKit

import trnql
let trnql = Trnql.sharedInstance // Optional: Store sharedInstance in a local variable

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        trnql.delegate = self
        trnql.startSmartActivity()
        trnql.startSmartLocation()
        
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    func smartAddressChanged(addressEntry: AddressEntry?, error: NSError?) {
        if error == nil {
            var tmpArray = [String]() // Adding data to a tmp array then copying to tableView data source to avoid potential index out of bounds
            
            let latitude = addressEntry?.getLat() ?? ""
            tmpArray.append("Latitude: \(latitude)")
            
            let longitude = addressEntry?.getLng() ?? ""
            tmpArray.append("Longitude: \(longitude)")

        } else {
            println(error!)
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}

extension ViewController: TrnqlDelegate {
    
//    func smartActivityChanged(activityEntry: ActivityEntry?, error: NSError?) {
//        // do something with activityEntry, eg: activityEntry.isWalking()
//    }
//    
//    func smartAddressChanged(addressEntry:AddressEntry?, error: NSError?) {
//        // do something with addressEntry, eg: addressEntry.getAddress()
//    }
//    
//    func smartLocationChanged(locationEntry: LocationEntry?, error: NSError?) {
//        // do something with locationEntry, eg: locationEntry.getSpeed()
//    }
}