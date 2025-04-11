#ifndef UIDASHBOARD_H
#define UIDASHBOARD_H

#include <QMainWindow>
#include <QTimer>
#include <dashboardmodel.h>

namespace Ui {
class UIDashboard;
}

class UIDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit UIDashboard(QWidget *parent = nullptr);
    UIDashboard(QObject* controller);

    void setModel(DashboardModel* dashboardModel);
    void updateNotificationButtons();
    ~UIDashboard();

private slots:
    void onAccountSelected(const QModelIndex &index);
    void refreshDashboard();

private:
    Ui::UIDashboard *ui;
    QTimer *refreshTimer ;
    DashboardModel* model ;

    void initialize();
    void setupConnections();
    void loadDashboardData();
};
#endif // UIDASHBOARD_H
