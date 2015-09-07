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

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

extension ViewController: TrnqlDelegate {
    
    func smartActivityChanged(activityEntry: ActivityEntry?, error: NSError?) {
        // do something with activityEntry, eg: activityEntry.isWalking()
    }
    
    func smartAddressChanged(addressEntry: AddressEntry?, error: NSError?) {
        // do something with addressEntry, eg: addressEntry.getAddress()
    }
    
    func smartLocationChanged(locationEntry: LocationEntry?, error: NSError?) {
        // do something with locationEntry, eg: locationEntry.getSpeed()
    }
}