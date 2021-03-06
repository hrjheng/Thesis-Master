{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 18 10:04:06 2018) by ROOT version5.34/36
   TCanvas *c = new TCanvas("c", "c",0,0,500,650);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-1.671429,-1.294118,4.757143,11.64706);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.26);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.05);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[2] = {0, 4.5}; 
   Double_t yAxis1[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 
   
   TH2F *dummy_ROOT_SUCKS__1 = new TH2F("dummy_ROOT_SUCKS__1","",1, xAxis1,11, yAxis1);
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
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(10,"#mu(gg#rightarrowH#rightarrowZZ)");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(9,"#mu_{VBF}/#mu_{ggH}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(8,"#mu_{WH}/#mu_{ggH}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(7,"#mu_{ZH}/#mu_{ggH}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(6,"#mu_{ttH}/#mu_{ggH}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(5,"#mu^{WW}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(4,"#mu^{#gamma#gamma}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(3,"#mu^{#tau#tau}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(2,"#mu^{bb}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(1,"#mu^{#mu#mu}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelSize(0.054);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->Draw("");
   TLine *line = new TLine(1,0,1,10);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10);
   grae->SetName("negative_scans_observed_May3_B1ZZ");
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
   grae->SetPoint(7,-999,7.5);
   grae->SetPointError(7,0,0,0.012,0.012);
   grae->SetPoint(8,-999,8.5);
   grae->SetPointError(8,0,0,0.012,0.012);
   grae->SetPoint(9,-999,9.5);
   grae->SetPointError(9,0,0,0.012,0.012);
   
   TH1F *Graph_negative_scans_observed_May3_B1ZZ1 = new TH1F("Graph_negative_scans_observed_May3_B1ZZ1","",100,-999.1,-997.9);
   Graph_negative_scans_observed_May3_B1ZZ1->SetMinimum(0);
   Graph_negative_scans_observed_May3_B1ZZ1->SetMaximum(10.4144);
   Graph_negative_scans_observed_May3_B1ZZ1->SetDirectory(0);
   Graph_negative_scans_observed_May3_B1ZZ1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_observed_May3_B1ZZ1->SetLineColor(ci);
   Graph_negative_scans_observed_May3_B1ZZ1->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_observed_May3_B1ZZ1->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_observed_May3_B1ZZ1->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_observed_May3_B1ZZ1->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_observed_May3_B1ZZ1->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_observed_May3_B1ZZ1->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_observed_May3_B1ZZ1->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_observed_May3_B1ZZ1->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_observed_May3_B1ZZ1->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_observed_May3_B1ZZ1->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_observed_May3_B1ZZ1->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_observed_May3_B1ZZ1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_observed_May3_B1ZZ1);
   
   grae->Draw("5");
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("best_fit_2sig_observed_May3_B1ZZ");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   grae->SetPoint(0,0.632015,0.5);
   grae->SetPointError(0,0.632015,2.64101,0.0024,0.0024);
   grae->SetPoint(1,0.838887,1.5);
   grae->SetPointError(1,0.476247,0.934019,0.0024,0.0024);
   grae->SetPoint(2,1.06689,2.5);
   grae->SetPointError(2,0.549045,0.847904,0.0024,0.0024);
   grae->SetPoint(3,1.13811,3.5);
   grae->SetPointError(3,0.362812,0.630551,0.0024,0.0024);
   grae->SetPoint(4,1.22904,4.5);
   grae->SetPointError(4,0.401,0.617731,0.0024,0.0024);
   grae->SetPoint(5,1.06171,5.5);
   grae->SetPointError(5,0.503242,0.740755,0.0024,0.0024);
   grae->SetPoint(6,0.879149,6.5);
   grae->SetPointError(6,0.913221,1.31811,0.0024,0.0024);
   grae->SetPoint(7,2.19451,7.5);
   grae->SetPointError(7,1.25543,1.89725,0.0024,0.0024);
   grae->SetPoint(8,0.603941,8.5);
   grae->SetPointError(8,0.45819,0.644602,0.0024,0.0024);
   grae->SetPoint(9,1.07248,9.5);
   grae->SetPointError(9,0.333489,0.435347,0.0024,0.0024);
   
   TH1F *Graph_best_fit_2sig_observed_May3_B1ZZ2 = new TH1F("Graph_best_fit_2sig_observed_May3_B1ZZ2","",100,-0.4466552,4.504343);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->SetMinimum(0);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->SetMaximum(10.40288);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->SetDirectory(0);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_2sig_observed_May3_B1ZZ2->SetLineColor(ci);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_observed_May3_B1ZZ2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_2sig_observed_May3_B1ZZ2);
   
   grae->Draw("5");
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("negative_scans_2sig_observed_May3_B1ZZ");
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
   grae->SetPoint(7,-999,7.5);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,-999,8.5);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,-999,9.5);
   grae->SetPointError(9,0,0,0,0);
   
   TH1F *Graph_negative_scans_2sig_observed_May3_B1ZZ3 = new TH1F("Graph_negative_scans_2sig_observed_May3_B1ZZ3","",100,-999.1,-997.9);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->SetMinimum(0);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->SetMaximum(10.4);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->SetDirectory(0);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->SetLineColor(ci);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_observed_May3_B1ZZ3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_2sig_observed_May3_B1ZZ3);
   
   grae->Draw("5");
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("best_fit_observed_May3_B1ZZ");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.632015,0.5);
   grae->SetPointError(0,0.632015,1.24734,0.012,0.012);
   grae->SetPoint(1,0.838887,1.5);
   grae->SetPointError(1,0.269963,0.374353,0.012,0.012);
   grae->SetPoint(2,1.06689,2.5);
   grae->SetPointError(2,0.300795,0.36952,0.012,0.012);
   grae->SetPoint(3,1.13811,3.5);
   grae->SetPointError(3,0.200196,0.276754,0.012,0.012);
   grae->SetPoint(4,1.22904,4.5);
   grae->SetPointError(4,0.220695,0.272831,0.012,0.012);
   grae->SetPoint(5,1.06171,5.5);
   grae->SetPointError(5,0.270217,0.335349,0.012,0.012);
   grae->SetPoint(6,0.879149,6.5);
   grae->SetPointError(6,0.441882,0.569035,0.012,0.012);
   grae->SetPoint(7,2.19451,7.5);
   grae->SetPointError(7,0.687089,0.855998,0.012,0.012);
   grae->SetPoint(8,0.603941,8.5);
   grae->SetPointError(8,0.241979,0.295587,0.012,0.012);
   grae->SetPoint(9,1.07248,9.5);
   grae->SetPointError(9,0.178221,0.200293,0.012,0.012);
   
   TH1F *Graph_best_fit_observed_May3_B1ZZ4 = new TH1F("Graph_best_fit_observed_May3_B1ZZ4","",100,0,3.355559);
   Graph_best_fit_observed_May3_B1ZZ4->SetMinimum(0);
   Graph_best_fit_observed_May3_B1ZZ4->SetMaximum(10.4144);
   Graph_best_fit_observed_May3_B1ZZ4->SetDirectory(0);
   Graph_best_fit_observed_May3_B1ZZ4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_observed_May3_B1ZZ4->SetLineColor(ci);
   Graph_best_fit_observed_May3_B1ZZ4->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_observed_May3_B1ZZ4->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_observed_May3_B1ZZ4->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_observed_May3_B1ZZ4->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_observed_May3_B1ZZ4->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_observed_May3_B1ZZ4->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_observed_May3_B1ZZ4->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_observed_May3_B1ZZ4->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_observed_May3_B1ZZ4->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_observed_May3_B1ZZ4->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_observed_May3_B1ZZ4->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_observed_May3_B1ZZ4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_observed_May3_B1ZZ4);
   
   grae->Draw("5p");
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(2);
   grae->SetLineWidth(6);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.632015,0.5);
   grae->SetPointError(0,0,0.18787,0.0024,0.0024);
   grae->SetPoint(1,0.838887,1.5);
   grae->SetPointError(1,0.172367,0.259575,0.0024,0.0024);
   grae->SetPoint(2,1.06689,2.5);
   grae->SetPointError(2,0.215229,0.271188,0.0024,0.0024);
   grae->SetPoint(3,1.13811,3.5);
   grae->SetPointError(3,0.0935451,0.156029,0.0024,0.0024);
   grae->SetPoint(4,1.22904,4.5);
   grae->SetPointError(4,0.1252,0.158353,0.0024,0.0024);
   grae->SetPoint(5,1.06171,5.5);
   grae->SetPointError(5,0.201311,0.269415,0.0024,0.0024);
   grae->SetPoint(6,0.879149,6.5);
   grae->SetPointError(6,0.167328,0.297311,0.0024,0.0024);
   grae->SetPoint(7,2.19451,7.5);
   grae->SetPointError(7,0.391216,0.522955,0.0024,0.0024);
   grae->SetPoint(8,0.603941,8.5);
   grae->SetPointError(8,0.127301,0.171529,0.0024,0.0024);
   grae->SetPoint(9,1.07248,9.5);
   grae->SetPointError(9,0.0936185,0.113999,0.0024,0.0024);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,0.2525575,2.941548);
   Graph_Graph5->SetMinimum(0);
   Graph_Graph5->SetMaximum(10.40288);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph5);
   
   grae->Draw("5p");
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(2);
   grae->SetLineWidth(6);
   grae->SetMarkerStyle(20);
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
   grae->SetPoint(7,-999,7.5);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,-999,8.5);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,-999,9.5);
   grae->SetPointError(9,0,0,0,0);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","",100,-999.1,-997.9);
   Graph_Graph6->SetMinimum(0);
   Graph_Graph6->SetMaximum(10.4);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph6);
   
   grae->Draw("5p");
   Double_t xAxis2[2] = {0, 4.5}; 
   Double_t yAxis2[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 
   
   TH2F *dummy_ROOT_SUCKS__2 = new TH2F("dummy_ROOT_SUCKS__2","",1, xAxis2,11, yAxis2);
   dummy_ROOT_SUCKS__2->SetDirectory(0);
   dummy_ROOT_SUCKS__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS__2->SetLineColor(ci);
   dummy_ROOT_SUCKS__2->GetXaxis()->SetTitle("Parameter value");
   dummy_ROOT_SUCKS__2->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__2->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__2->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__2->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(10,"#mu(gg#rightarrowH#rightarrowZZ)");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(9,"#mu_{VBF}/#mu_{ggH}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(8,"#mu_{WH}/#mu_{ggH}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(7,"#mu_{ZH}/#mu_{ggH}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(6,"#mu_{ttH}/#mu_{ggH}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(5,"#mu^{WW}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(4,"#mu^{#gamma#gamma}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(3,"#mu^{#tau#tau}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(2,"#mu^{bb}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetBinLabel(1,"#mu^{#mu#mu}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__2->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__2->GetYaxis()->SetLabelSize(0.054);
   dummy_ROOT_SUCKS__2->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__2->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__2->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__2->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__2->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__2->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__2->Draw("sameaxis");
   TBox *box = new TBox(0.01,10,4.485,10.98);
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
   
   TLegend *leg = new TLegend(0.69,0.79,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("best_fit_observed_May3_B1ZZ","Observed","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("obj","#pm1#kern[0.2]{#sigma} (stat #oplus syst)","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("obj","#pm2#sigma (stat #oplus syst)","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("obj","#pm1#kern[0.2]{#sigma} (syst)","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(6);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Double_t xAxis3[2] = {0, 4.5}; 
   Double_t yAxis3[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 
   
   TH2F *dummy_ROOT_SUCKS__3 = new TH2F("dummy_ROOT_SUCKS__3","",1, xAxis3,11, yAxis3);
   dummy_ROOT_SUCKS__3->SetDirectory(0);
   dummy_ROOT_SUCKS__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS__3->SetLineColor(ci);
   dummy_ROOT_SUCKS__3->GetXaxis()->SetTitle("Parameter value");
   dummy_ROOT_SUCKS__3->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__3->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__3->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__3->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(10,"#mu(gg#rightarrowH#rightarrowZZ)");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(9,"#mu_{VBF}/#mu_{ggH}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(8,"#mu_{WH}/#mu_{ggH}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(7,"#mu_{ZH}/#mu_{ggH}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(6,"#mu_{ttH}/#mu_{ggH}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(5,"#mu^{WW}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(4,"#mu^{#gamma#gamma}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(3,"#mu^{#tau#tau}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(2,"#mu^{bb}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetBinLabel(1,"#mu^{#mu#mu}/#mu^{ZZ}");
   dummy_ROOT_SUCKS__3->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__3->GetYaxis()->SetLabelSize(0.054);
   dummy_ROOT_SUCKS__3->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__3->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__3->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__3->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__3->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__3->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__3->Draw("sameaxis");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
