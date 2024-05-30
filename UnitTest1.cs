using NUnit.Framework;
using System.Data;

namespace TestAppRattrapage
{
    public class AjouterPersonnelTest
    {
        private CL_Services Services { get; set; } = null!;

        [SetUp]
        public void Setup()
        {
            Services = new CL_Services();
        }

        [Test]
        public void AjoutPersonnel()
        {
            //Assign
            var nom = "JeanDav";
            var prenom = "David";
            var adresse = "";
            var dateEmbauche = "25/05/2024 00:00:00";
            uint idSuperieur = 1;
            var email = "oui";
            var telephone = "oui";

            var ResultString = "";

            //Act

            //Ajout d'un personnel
            Services.ajouterPersonne(nom, prenom, adresse, dateEmbauche, idSuperieur, email, telephone);

            //On récupère le dernier personnel ajouté
            DataSet Result = Services.afficherToutPersonne("test");
            DataRow Row = Result.Tables["test"].Rows[Result.Tables["test"].Rows.Count - 1];

            //On créée le ResultString
            for (int i = 1; i < Row.ItemArray.Length; i++)
            {
                ResultString += Row.ItemArray[i].ToString();
            }

            //On créée le String qui est attendu
            var ExpectedString = prenom + nom + adresse + email + telephone + dateEmbauche + idSuperieur.ToString();

            //Assert
            Assert.That(ResultString, Is.EqualTo(ExpectedString));
        }
    }
}