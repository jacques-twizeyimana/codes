using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml;
using System.Xml.Linq;
using System.IO;

namespace StudentsDB
{
    public partial class StudentForm : Form
    {
        public StudentForm()
        {
            InitializeComponent();
        }

        public void ReadData()
        {
            XmlReader reader;
            try
            {
                reader = XmlReader.Create("C:\\Users\\Sandberg\\Documents\\dotNet\\students.xml", new XmlReaderSettings());

                DataSet ds = new DataSet();
                ds.ReadXml(reader);

                dataConsole.DataSource = ds.Tables[0];
                reader.Close();
            }
            catch
            {
                Console.WriteLine("The file was not found");
                MessageBox.Show("Error occured while trying to read the file");
            }
        }
        private void submit_Click(object sender, EventArgs e)
        {
            if (!File.Exists("C:\\Users\\Sandberg\\Documents\\dotNet\\students.xml"))
            {
                XmlTextWriter writer = new XmlTextWriter("C:\\Users\\Sandberg\\Documents\\dotNet\\students.xml", System.Text.Encoding.UTF8);

                writer.WriteStartDocument(true);
                writer.Formatting = Formatting.Indented;
                writer.Indentation = 5;

                writer.WriteStartElement("School");
                writer.WriteStartElement("Student");

                writer.WriteStartElement("Student_id");
                writer.WriteString(studentId.Text);
                writer.WriteEndElement();
                writer.WriteStartElement("FirstName");
                writer.WriteString(firstName.Text);
                writer.WriteEndElement();
                writer.WriteStartElement("LastName");
                writer.WriteString(lastName.Text);
                writer.WriteEndElement();
                writer.WriteStartElement("Student_age");
                writer.WriteString(studentAge.Text);
                writer.WriteEndElement();
                writer.WriteStartElement("Student_class");
                writer.WriteString(studentClass.Text);
                writer.WriteEndElement();

                writer.WriteEndElement();

                writer.WriteEndElement();
                writer.Close();
            }
            else
            {
                XDocument xDocument = XDocument.Load("C:\\Users\\Sandberg\\Documents\\dotNet\\students.xml");
                XElement root = xDocument.Element("School");
                IEnumerable<XElement> rows = root.Descendants("Student");
                XElement firstRow = rows.Last();
                firstRow.AddAfterSelf(
                   new XElement("Student",
                   new XElement("Student_id", studentId.Text ),
                   new XElement("FirstName", firstName.Text),
                   new XElement("LastName", lastName.Text),
                   new XElement("Student_age", studentAge.Text),
                   new XElement("Student_class", studentClass.Text )));

                xDocument.Save("C:\\Users\\Sandberg\\Documents\\dotNet\\students.xml");
            }
            studentId.Text = "";firstName.Text = "";lastName.Text = "";studentAge.Text = "";studentClass.Text = "";
            ReadData();

        }

        private void bReadData_Click(object sender, EventArgs e)
        {
            ReadData();
        }
    }
}
