using System.Text;

namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }


        private void button1_Click(object sender, EventArgs e)
        {
            var model = new OutputFileModel();
            model.OutputFileName = textBox1.Text;
            model.Shapes.Add(new Tuple<string, string, string>(checkBox1.Text, comboBoxShape1.Text, comboBoxColor1.Text));
            model.Shapes.Add(new Tuple<string, string, string>(checkBox2.Text, comboBoxShape2.Text, comboBoxColor2.Text));
            model.Shapes.Add(new Tuple<string, string, string>(checkBox3.Text, comboBoxShape3.Text, comboBoxColor3.Text));

            var class1 = new GUIClass1();
            class1.Create(model);

            SvgGenerator.FileInput.File(textBox2.Text, textBox1.Text);
        }
    }
}