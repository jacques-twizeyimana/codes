using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class calculatorForm : Form
    {
        double firstNumber;
        double result;
        string operat; //current operator choosen
        bool appendText = true; //boolen is allowed to append character after this one??? by default lets be allowed

        string text;
        public calculatorForm()
        {
            InitializeComponent();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (textBox.Text == "0" || !appendText)
            {
                textBox.Text = "5";
            }
            else
            {
                textBox.Text += "5";
            }
        }

        private double calculate(double number1, string operation, double number2)
        {
            double result = 0;
            switch (operation)
            {
                case "+":
                    result = number1 + number2;
                    break;
                case "-":
                    result = number1 - number2;
                    break;
                case "*":
                    result = number1 * number2;
                    break;
                case "/":
                    result = number1 / number2;
                    break;
                case "%":
                    result = number1 % number2;
                    break;
                case "^":
                    result = Math.Pow(number1, number2);
                break;
            }
            return result;
        }
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox.Text == "0" || !appendText)
            {
                appendText = true;
                textBox.Text = "1";
            }
            else
            {
                textBox.Text += "1";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (textBox.Text == "0" || !appendText)
            {
                appendText = true;
                textBox.Text = "2";
            }
            else
            {
                textBox.Text += "2";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (textBox.Text == "0" || !appendText)
            {
                appendText = true;
                textBox.Text = "3";
            }
            else
            {
                textBox.Text += "3";
            }
        }

        private void button13_Click(object sender, EventArgs e)
        {
            if (operat != null)
            {
                result = calculate(firstNumber, operat, double.Parse(textBox.Text));
                textBox.Text = result.ToString(); ;
            }

            operat = "+";
            firstNumber = double.Parse(textBox.Text);
            appendText = false;
        }

        private void button17_Click(object sender, EventArgs e)
        {
            textBox.Text = "0";
        }

        private void button18_Click(object sender, EventArgs e)
        {
            textBox.Text = textBox.Text.Remove(textBox.Text.Length - 1, 1);
        }

        private void button19_Click(object sender, EventArgs e)
        {
            if (operat != null)
            {
                //now first find answer to prevoius equation
                result = calculate(firstNumber, operat, double.Parse(textBox.Text));
                textBox.Text = result.ToString();
            }

            //Lets prepare this to be input or firstnumber of next operation
            operat = "%";
            firstNumber = double.Parse(textBox.Text);
            appendText = false;
        }

        private void buttonOfValue4_Click(object sender, EventArgs e)
        {
            if (textBox.Text == "0" || !appendText)
            {
                appendText = true;
                textBox.Text = "4";
            }
            else
            {
                textBox.Text += "4";
            }
        }

        private void buttonOfValue6_Click(object sender, EventArgs e)
        {
            if (textBox.Text == "0" || !appendText)
            {
                appendText = true;
                textBox.Text = "6";
            }
            else
            {
                textBox.Text += "6";
            }
        }

        private void buttonOfValue7_Click(object sender, EventArgs e)
        {

            if (textBox.Text == "0" || !appendText)
            {
                appendText = true;
                textBox.Text = "7";
            }
            else
            {
                textBox.Text += "7";
            }
        }

        private void buttonOfValue8_Click(object sender, EventArgs e)
        {

            if (textBox.Text == "0" || !appendText)
            {
                appendText = true;
                textBox.Text = "8";
            }
            else
            {
                textBox.Text += "8";
            }
        }

        private void buttonOfValue9_Click(object sender, EventArgs e)
        {
            if (textBox.Text == "0" || !appendText)
            {
                appendText = true;
                textBox.Text = "9";
            }
            else
            {
                textBox.Text += "9";
            }

        }

        private void buttonOfValue0_Click(object sender, EventArgs e)
        {

            if (textBox.Text == "0" || !appendText)
            {
                // textBox.Text = "1";
            }
            else
            {
                textBox.Text += "0";
            }
        }

        private void signOperationButton_Click(object sender, EventArgs e)
        {
            text = textBox.Text.ToString();
            if (appendText && Char.IsNumber(text[0]))
            {
                textBox.Text = "-" + textBox.Text;
                //textBox.Text = "1";
            }
            else
            {
                textBox.Text = textBox.Text.Remove(0, 1);
            }
        }

        private void buttonOfValueDot_Click(object sender, EventArgs e)
        {
            if (appendText && !textBox.Text.Contains("."))
            {
                textBox.Text += ".";
            }
        }

        private void minusOperationButton_Click(object sender, EventArgs e)
        {
            if (operat != null)
            {
                result = calculate(firstNumber, operat, double.Parse(textBox.Text));
                textBox.Text = result.ToString();
            }

            //Lets prepare this to be input or firstnumber of next operation
            operat = "-";
            firstNumber = double.Parse(textBox.Text);
            appendText = false;
        }

        private void timesOperationButton_Click(object sender, EventArgs e)
        {
            if (operat != null)
            {
                result = calculate(firstNumber, operat, double.Parse(textBox.Text));
                textBox.Text = result.ToString();
            }

            operat = "*";
            firstNumber = double.Parse(textBox.Text);
            appendText = false;
        }

        private void divideOperationButton_Click(object sender, EventArgs e)
        {
            if (operat != null)
            {
                result = calculate(firstNumber, operat, double.Parse(textBox.Text));
                textBox.Text = result.ToString();
            }

            operat = "/";
            firstNumber = double.Parse(textBox.Text);
            appendText = false;
        }

        private void equalsToOperationButton_Click(object sender, EventArgs e)
        {
            double lastNumber = double.Parse(textBox.Text);
            if (operat != null)
            {
                double result = calculate(firstNumber, operat, lastNumber);
                textBox.Text = result.ToString();
                operat = null;
                appendText = false;
            }
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            firstNumber = double.Parse(textBox.Text);
            textBox.Text = (Math.Sqrt(firstNumber)).ToString();
            appendText = false;
        }

        private void squareButton_Click(object sender, EventArgs e)
        {
            firstNumber = double.Parse(textBox.Text);
            textBox.Text = (firstNumber * firstNumber).ToString();
            appendText = false;
        }

        private void sinButton_Click(object sender, EventArgs e)
        {
            firstNumber = double.Parse(textBox.Text);
            textBox.Text = (Math.Sin(firstNumber)).ToString();
            appendText = false;
        }

        private void cosineButton_Click(object sender, EventArgs e)
        {
            firstNumber = double.Parse(textBox.Text);
            textBox.Text = (Math.Cos(firstNumber)).ToString();
            appendText = false;
        }

        private void oneOverX_Click(object sender, EventArgs e)
        {
            firstNumber = double.Parse(textBox.Text);
            textBox.Text = (1 / firstNumber).ToString();
            appendText = false;
        }

        private void xPowerY_Click(object sender, EventArgs e)
        {
            if (operat != null)
            {
                result = calculate(firstNumber, operat, double.Parse(textBox.Text));
                textBox.Text = result.ToString();
            }

            operat = "^";
            firstNumber = double.Parse(textBox.Text);
            appendText = false;
        }
    }
}