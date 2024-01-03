#include "connexion.h"
#include <QDebug>
#include <QSqlError>

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{

    bool test =false;
    db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("test");
    db.setUserName("safa1");//inserer nom de l'utilisateur
    db.setPassword("safa106");//inserer mot de passe de cet utilisateur


    if (db.open())
    {test=true;}
    else
    {qDebug() << "Database error: " << db.lastError().text();
        }
    return test;
}
void Connexion::fermerConnexion()
{db.close();}



