{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 18 13:10:11 2018) by ROOT version5.34/36
   TCanvas *c = new TCanvas("c", "c",0,0,500,520);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-4.042857,-1.058824,3.814286,9.529412);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.26);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.05);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[2] = {-2, 3.5}; 
   Double_t yAxis1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
   
   TH2F *dummy_ROOT_SUCKS__1 = new TH2F("dummy_ROOT_SUCKS__1","",1, xAxis1,9, yAxis1);
   dummy_ROOT_SUCKS__1->SetDirectory(0);
   dummy_ROOT_SUCKS__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS__1->SetLineColor(ci);
   dummy_ROOT_SUCKS__1->GetXaxis()->SetTitle("Parameter value");
   dummy_ROOT_SUCKS__1->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__1->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(8,"#kappa_{Z}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(7,"#kappa_{W}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(6,"#kappa_{t}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(5,"|#kappa_{#tau}|");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(4,"|#kappa_{b}|");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(3,"|#kappa_{g}|");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(2,"|#kappa_{#gamma}|");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(1,"|#kappa_{#mu}|");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelSize(0.075);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->Draw("");
   TBox *box = new TBox(-2,5,0,6);

   ci = TColor::GetColor("#999999");
   box->SetFillColor(ci);
   box->SetFillStyle(3244);
   box->Draw();
   TLine *line = new TLine(1,0,1,8);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8);
   grae->SetName("negative_scans_neg_observed_May3_K2");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   grae->SetPoint(0,-999,0.5);
   grae->SetPointError(0,0,0,0.012,0.012);
   grae->SetPoint(1,-999,1.5);
   grae->SetPointError(1,0,0,0.012,0.012);
   grae->SetPoint(2,-999,2.5);
   grae->SetPointError(2,0,0,0.012,0.012);
   grae->SetPoint(3,-999,3.5);
   grae->SetPointError(3,0,0,0.012,0.012);
   grae->SetPoint(4,-999,4.5);
   grae->SetPointError(4,0,0,0.012,0.012);
   grae->SetPoint(5,-999,5.5);
   grae->SetPointError(5,0,0,0.012,0.012);
   grae->SetPoint(6,-999,6.5);
   grae->SetPointError(6,0,0,0.012,0.012);
   grae->SetPoint(7,-0.8682235,7.5);
   grae->SetPointError(7,0.0352245,0.0352245,0.012,0.012);
   
   TH1F *Graph_negative_scans_neg_observed_May3_K21 = new TH1F("Graph_negative_scans_neg_observed_May3_K21","",100,-1098.817,0);
   Graph_negative_scans_neg_observed_May3_K21->SetMinimum(0);
   Graph_negative_scans_neg_observed_May3_K21->SetMaximum(8.2144);
   Graph_negative_scans_neg_observed_May3_K21->SetDirectory(0);
   Graph_negative_scans_neg_observed_May3_K21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_neg_observed_May3_K21->SetLineColor(ci);
   Graph_negative_scans_neg_observed_May3_K21->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_neg_observed_May3_K21->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_neg_observed_May3_K21->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_neg_observed_May3_K21->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_neg_observed_May3_K21->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_neg_observed_May3_K21->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_neg_observed_May3_K21->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_neg_observed_May3_K21->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_neg_observed_May3_K21->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_neg_observed_May3_K21->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_neg_observed_May3_K21->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_neg_observed_May3_K21->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_neg_observed_May3_K21);
   
   grae->Draw("5");
   
   grae = new TGraphAsymmErrors(8);
   grae->SetName("best_fit_2sig_neg_observed_May3_K2");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   grae->SetPoint(0,0.797698,0.5);
   grae->SetPointError(0,0.797698,1.04172,0.0024,0.0024);
   grae->SetPoint(1,1.06944,1.5);
   grae->SetPointError(1,0.312993,0.271052,0.0024,0.0024);
   grae->SetPoint(2,1.177,2.5);
   grae->SetPointError(2,0.25993,0.339467,0.0024,0.0024);
   grae->SetPoint(3,1.16655,3.5);
   grae->SetPointError(3,0.58157,0.580917,0.0024,0.0024);
   grae->SetPoint(4,1.0206,4.5);
   grae->SetPointError(4,0.355981,0.3433,0.0024,0.0024);
   grae->SetPoint(5,0.979508,5.5);
   grae->SetPointError(5,0.287529,0.277562,0.0024,0.0024);
   grae->SetPoint(6,-1.12774,6.5);
   grae->SetPointError(6,0.254961,0.33671,0.0024,0.0024);
   grae->SetPoint(7,0.996825,7.5);
   grae->SetPointError(7,0.232103,0.211919,0.0024,0.0024);
   
   TH1F *Graph_best_fit_2sig_neg_observed_May3_K22 = new TH1F("Graph_best_fit_2sig_neg_observed_May3_K22","",100,-1.704913,2.16163);
   Graph_best_fit_2sig_neg_observed_May3_K22->SetMinimum(0);
   Graph_best_fit_2sig_neg_observed_May3_K22->SetMaximum(8.20288);
   Graph_best_fit_2sig_neg_observed_May3_K22->SetDirectory(0);
   Graph_best_fit_2sig_neg_observed_May3_K22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_2sig_neg_observed_May3_K22->SetLineColor(ci);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_K22->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_2sig_neg_observed_May3_K22);
   
   grae->Draw("5");
   
   grae = new TGraphAsymmErrors(8);
   grae->SetName("negative_scans_2sig_neg_observed_May3_K2");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   grae->SetPoint(0,-999,0.5);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,-999,1.5);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,-999,2.5);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,-999,3.5);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,-999,4.5);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,-999,5.5);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,-999,6.5);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,-0.8649715,7.5);
   grae->SetPointError(7,0.1745785,0.1745785,0,0);
   
   TH1F *Graph_negative_scans_2sig_neg_observed_May3_K23 = new TH1F("Graph_negative_scans_2sig_neg_observed_May3_K23","",100,-1098.831,0);
   Graph_negative_scans_2sig_neg_observed_May3_K23->SetMinimum(0);
   Graph_negative_scans_2sig_neg_observed_May3_K23->SetMaximum(8.2);
   Graph_negative_scans_2sig_neg_observed_May3_K23->SetDirectory(0);
   Graph_negative_scans_2sig_neg_observed_May3_K23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_2sig_neg_observed_May3_K23->SetLineColor(ci);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_K23->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_2sig_neg_observed_May3_K23);
   
   grae->Draw("5");
   
   grae = new TGraphAsymmErrors(8);
   grae->SetName("best_fit_neg_observed_May3_K2");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.797698,0.5);
   grae->SetPointError(0,0.797698,0.588964,0.012,0.012);
   grae->SetPoint(1,1.06944,1.5);
   grae->SetPointError(1,0.151651,0.135425,0.012,0.012);
   grae->SetPoint(2,1.177,2.5);
   grae->SetPointError(2,0.135663,0.157971,0.012,0.012);
   grae->SetPoint(3,1.16655,3.5);
   grae->SetPointError(3,0.307061,0.271377,0.012,0.012);
   grae->SetPoint(4,1.0206,4.5);
   grae->SetPointError(4,0.165964,0.165485,0.012,0.012);
   grae->SetPoint(5,0.979508,5.5);
   grae->SetPointError(5,0.137818,0.139362,0.012,0.012);
   grae->SetPoint(6,-1.12774,6.5);
   grae->SetPointError(6,0.125789,0.161138,0.012,0.012);
   grae->SetPoint(7,0.996825,7.5);
   grae->SetPointError(7,0.111929,0.107015,0.012,0.012);
   
   TH1F *Graph_best_fit_neg_observed_May3_K24 = new TH1F("Graph_best_fit_neg_observed_May3_K24","",100,-1.522675,1.707073);
   Graph_best_fit_neg_observed_May3_K24->SetMinimum(0);
   Graph_best_fit_neg_observed_May3_K24->SetMaximum(8.2144);
   Graph_best_fit_neg_observed_May3_K24->SetDirectory(0);
   Graph_best_fit_neg_observed_May3_K24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_neg_observed_May3_K24->SetLineColor(ci);
   Graph_best_fit_neg_observed_May3_K24->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_neg_observed_May3_K24->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_neg_observed_May3_K24->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_neg_observed_May3_K24->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_neg_observed_May3_K24->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_neg_observed_May3_K24->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_neg_observed_May3_K24->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_neg_observed_May3_K24->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_neg_observed_May3_K24->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_neg_observed_May3_K24->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_neg_observed_May3_K24->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_neg_observed_May3_K24->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_neg_observed_May3_K24);
   
   grae->Draw("5p");
   Double_t xAxis2[2] = {-2, 3.5}; 
   Double_t yAxis2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
   
   TH2F *dummy_ROOT_SUCKS__2 = new TH2F("dummy_ROOT_SUCKS__2","",1, xAxis2,9, yAxis2);
   dummy_ROOT_SUCKS__2->SetDirectory(0);
   dummy_ROOT_SUCKS__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS__2->SetLineColor(ci);
   dummy_ROOT_SUCKS__2->GetXaxis()->SetTitle("Parameter value");
   dummy_ROOT_SUCKS__2->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__2->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__2->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__2->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(8,"#kappa_{Z}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(7,"#kappa_{W}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(6,"#kappa_{t}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(5,"|#kappa_{#tau}|");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(4,"|#kappa_{b}|");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(3,"|#kappa_{g}|");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(2,"|#kappa_{#gamma}|");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(1,"|#kappa_{#mu}|");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__2->GetYaxis()->SetLabelSize(0.075);
   dummy_ROOT_SUCKS__2->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__2->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__2->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__2->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__2->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__2->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__2->Draw("sameaxis");
   box = new TBox(-1.99,8,3.485,8.98);
   box->SetFillColor(10);
   box->Draw();
   TLatex *   tex = new TLatex(0.28,0.9,"#bf{CMS}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.7,0.96,"35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.031);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.72,0.79,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("best_fit_neg_observed_May3_K2","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("obj","1#kern[0.2]{#sigma} interval","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("obj","2#sigma interval","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Double_t xAxis3[2] = {-2, 3.5}; 
   Double_t yAxis3[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
   
   TH2F *dummy_ROOT_SUCKS__3 = new TH2F("dummy_ROOT_SUCKS__3","",1, xAxis3,9, yAxis3);
   dummy_ROOT_SUCKS__3->SetDirectory(0);
   dummy_ROOT_SUCKS__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS__3->SetLineColor(ci);
   dummy_ROOT_SUCKS__3->GetXaxis()->SetTitle("Parameter value");
   dummy_ROOT_SUCKS__3->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__3->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__3->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__3->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(8,"#kappa_{Z}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(7,"#kappa_{W}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(6,"#kappa_{t}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(5,"|#kappa_{#tau}|");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(4,"|#kappa_{b}|");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(3,"|#kappa_{g}|");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(2,"|#kappa_{#gamma}|");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(1,"|#kappa_{#mu}|");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__3->GetYaxis()->SetLabelSize(0.075);
   dummy_ROOT_SUCKS__3->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__3->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__3->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__3->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__3->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__3->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__3->Draw("sameaxis");
      tex = new TLatex(0.73,0.75,"B_{BSM} = 0");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
