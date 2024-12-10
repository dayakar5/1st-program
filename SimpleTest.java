import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.testng.annotations.Test;

import io.github.bonigarcia.wdm.WebDriverManager;
import junit.framework.Assert;

public class SimpleTest {

@Test 
	
	public void simple_Test()
	{
	WebDriverManager.chromedriver().setup();
	WebDriver driver= new ChromeDriver();
	
	driver.get("http://localhost:8084/mvnregapp");
	driver.manage().window().maximize();
	
	
	Assert.assertEquals(driver.getTitle(),"REGISTRATION EVENT");
	driver.close();
	}
}
