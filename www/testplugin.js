if (typeof PhoneGap !== "undefined") {

     var TestPlugin = function() {};

    TestPlugin.prototype.test = function(successCallback, failureCallback) 
    {
        return PhoneGap.exec(successCallback, failureCallback, "TestPlugin", "test", []);
    }

    PhoneGap.addConstructor(function() 
    {
        if(!window.plugins)
        {
            window.plugins = {};
        }
        window.plugins.testPlugin = new TestPlugin();
    });

}