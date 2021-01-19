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

namespace XMLFiles
{
    public partial class XmlFiles : Form
    {
        public XmlFiles()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            XmlReader reader;
            reader=XmlReader.Create("C:\\Users\\Sandberg\\Documents\\dotNet\\product.xml", new XmlReaderSettings());

            DataSet ds = new DataSet();
            ds.ReadXml(reader);

            dataContainer.DataSource = ds.Tables[0];

        }

        private void bCreateXML_Click(object sender, EventArgs e)
        {
            XmlTextWriter writer = new XmlTextWriter("C:\\Users\\Sandberg\\Documents\\dotNet\\product.xml", System.Text.Encoding.UTF8);

            writer.WriteStartDocument(true);
            writer.Formatting = Formatting.Indented;
            writer.Indentation = 3;

            writer.WriteStartElement("Table");
                writer.WriteStartElement("Product");
                    writer.WriteStartElement("Product_id");
                        writer.WriteString("1");
                    writer.WriteEndElement();

                    writer.WriteStartElement("Product_name");
                        writer.WriteString("Rice");
                    writer.WriteEndElement();

                    writer.WriteStartElement("Seller_name");
                        writer.WriteString("Dushimimana Samuel");
                    writer.WriteEndElement();
                writer.WriteEndElement();
            writer.WriteEndElement();
            writer.Close();
        }
    }
}
