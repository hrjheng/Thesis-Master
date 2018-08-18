void plot_A1_5D_merged()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  9 13:28:39 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,480,540);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-4.042857,-0.8235295,3.814286,7.411765);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.26);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.05);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[2] = {-2, 3.5}; 
   Double_t yAxis1[8] = {0, 1, 2, 3, 4, 5, 6, 7}; 
   
   TH2F *dummy_ROOT_SUCKS__1 = new TH2F("dummy_ROOT_SUCKS__1","",1, xAxis1,7, yAxis1);
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
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(6,"#mu^{#gamma#gamma}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(5,"#mu^{ZZ}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(4,"#mu^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(3,"#mu^{#tau#tau}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(2,"#mu^{bb}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(1,"#mu^{#mu#mu}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelSize(0.075);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->Draw("");
   TLine *line = new TLine(1,0,1,6);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t negative_scans_observed_May3_A1_5D_fx3001[6] = {
   -999,
   -999,
   -999,
   -999,
   -999,
   -999};
   Double_t negative_scans_observed_May3_A1_5D_fy3001[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t negative_scans_observed_May3_A1_5D_felx3001[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_observed_May3_A1_5D_fely3001[6] = {
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012};
   Double_t negative_scans_observed_May3_A1_5D_fehx3001[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_observed_May3_A1_5D_fehy3001[6] = {
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,negative_scans_observed_May3_A1_5D_fx3001,negative_scans_observed_May3_A1_5D_fy3001,negative_scans_observed_May3_A1_5D_felx3001,negative_scans_observed_May3_A1_5D_fehx3001,negative_scans_observed_May3_A1_5D_fely3001,negative_scans_observed_May3_A1_5D_fehy3001);
   grae->SetName("negative_scans_observed_May3_A1_5D");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_negative_scans_observed_May3_A1_5D3001 = new TH1F("Graph_negative_scans_observed_May3_A1_5D3001","",100,-999.1,-997.9);
   Graph_negative_scans_observed_May3_A1_5D3001->SetMinimum(0);
   Graph_negative_scans_observed_May3_A1_5D3001->SetMaximum(6.0144);
   Graph_negative_scans_observed_May3_A1_5D3001->SetDirectory(0);
   Graph_negative_scans_observed_May3_A1_5D3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_observed_May3_A1_5D3001->SetLineColor(ci);
   Graph_negative_scans_observed_May3_A1_5D3001->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_observed_May3_A1_5D3001->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_observed_May3_A1_5D3001->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_observed_May3_A1_5D3001->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_observed_May3_A1_5D3001->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_observed_May3_A1_5D3001->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_observed_May3_A1_5D3001->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_observed_May3_A1_5D3001->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_observed_May3_A1_5D3001->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_observed_May3_A1_5D3001->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_observed_May3_A1_5D3001->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_observed_May3_A1_5D3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_observed_May3_A1_5D3001);
   
   grae->Draw("5");
   
   Double_t best_fit_2sig_observed_May3_A1_5D_fx3002[6] = {
   0.675773,
   1.12181,
   1.02069,
   1.28411,
   1.05536,
   1.20267};
   Double_t best_fit_2sig_observed_May3_A1_5D_fy3002[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t best_fit_2sig_observed_May3_A1_5D_felx3002[6] = {
   2.47092,
   0.553207,
   0.467035,
   0.306349,
   0.32067,
   0.275123};
   Double_t best_fit_2sig_observed_May3_A1_5D_fely3002[6] = {
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024};
   Double_t best_fit_2sig_observed_May3_A1_5D_fehx3002[6] = {
   2.53461,
   0.587911,
   0.535244,
   0.347463,
   0.405476,
   0.365701};
   Double_t best_fit_2sig_observed_May3_A1_5D_fehy3002[6] = {
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024};
   grae = new TGraphAsymmErrors(6,best_fit_2sig_observed_May3_A1_5D_fx3002,best_fit_2sig_observed_May3_A1_5D_fy3002,best_fit_2sig_observed_May3_A1_5D_felx3002,best_fit_2sig_observed_May3_A1_5D_fehx3002,best_fit_2sig_observed_May3_A1_5D_fely3002,best_fit_2sig_observed_May3_A1_5D_fehy3002);
   grae->SetName("best_fit_2sig_observed_May3_A1_5D");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_best_fit_2sig_observed_May3_A1_5D3002 = new TH1F("Graph_best_fit_2sig_observed_May3_A1_5D3002","",100,-2.2957,3.710936);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->SetMinimum(0);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->SetMaximum(6.00288);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->SetDirectory(0);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_2sig_observed_May3_A1_5D3002->SetLineColor(ci);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_observed_May3_A1_5D3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_2sig_observed_May3_A1_5D3002);
   
   grae->Draw("5");
   
   Double_t negative_scans_2sig_observed_May3_A1_5D_fx3003[6] = {
   -999,
   -999,
   -999,
   -999,
   -999,
   -999};
   Double_t negative_scans_2sig_observed_May3_A1_5D_fy3003[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t negative_scans_2sig_observed_May3_A1_5D_felx3003[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_2sig_observed_May3_A1_5D_fely3003[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_2sig_observed_May3_A1_5D_fehx3003[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_2sig_observed_May3_A1_5D_fehy3003[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(6,negative_scans_2sig_observed_May3_A1_5D_fx3003,negative_scans_2sig_observed_May3_A1_5D_fy3003,negative_scans_2sig_observed_May3_A1_5D_felx3003,negative_scans_2sig_observed_May3_A1_5D_fehx3003,negative_scans_2sig_observed_May3_A1_5D_fely3003,negative_scans_2sig_observed_May3_A1_5D_fehy3003);
   grae->SetName("negative_scans_2sig_observed_May3_A1_5D");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_negative_scans_2sig_observed_May3_A1_5D3003 = new TH1F("Graph_negative_scans_2sig_observed_May3_A1_5D3003","",100,-999.1,-997.9);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->SetMinimum(0);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->SetMaximum(6);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->SetDirectory(0);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->SetLineColor(ci);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_observed_May3_A1_5D3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_2sig_observed_May3_A1_5D3003);
   
   grae->Draw("5");
   
   Double_t best_fit_observed_May3_A1_5D_fx3004[6] = {
   0.675773,
   1.12181,
   1.02069,
   1.28411,
   1.05536,
   1.20267};
   Double_t best_fit_observed_May3_A1_5D_fy3004[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t best_fit_observed_May3_A1_5D_felx3004[6] = {
   1.24145,
   0.288673,
   0.239976,
   0.157019,
   0.169051,
   0.142251};
   Double_t best_fit_observed_May3_A1_5D_fely3004[6] = {
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012};
   Double_t best_fit_observed_May3_A1_5D_fehx3004[6] = {
   1.24955,
   0.286901,
   0.256967,
   0.168155,
   0.191347,
   0.177691};
   Double_t best_fit_observed_May3_A1_5D_fehy3004[6] = {
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012};
   grae = new TGraphAsymmErrors(6,best_fit_observed_May3_A1_5D_fx3004,best_fit_observed_May3_A1_5D_fy3004,best_fit_observed_May3_A1_5D_felx3004,best_fit_observed_May3_A1_5D_fehx3004,best_fit_observed_May3_A1_5D_fely3004,best_fit_observed_May3_A1_5D_fehy3004);
   grae->SetName("best_fit_observed_May3_A1_5D");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_best_fit_observed_May3_A1_5D3004 = new TH1F("Graph_best_fit_observed_May3_A1_5D3004","",100,-0.814777,2.174423);
   Graph_best_fit_observed_May3_A1_5D3004->SetMinimum(0);
   Graph_best_fit_observed_May3_A1_5D3004->SetMaximum(6.0144);
   Graph_best_fit_observed_May3_A1_5D3004->SetDirectory(0);
   Graph_best_fit_observed_May3_A1_5D3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_observed_May3_A1_5D3004->SetLineColor(ci);
   Graph_best_fit_observed_May3_A1_5D3004->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_observed_May3_A1_5D3004->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_observed_May3_A1_5D3004->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_observed_May3_A1_5D3004->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_observed_May3_A1_5D3004->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_observed_May3_A1_5D3004->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_observed_May3_A1_5D3004->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_observed_May3_A1_5D3004->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_observed_May3_A1_5D3004->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_observed_May3_A1_5D3004->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_observed_May3_A1_5D3004->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_observed_May3_A1_5D3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_observed_May3_A1_5D3004);
   
   grae->Draw("5p");
   
   Double_t _fx3005[6] = {
   0.675773,
   1.12181,
   1.02069,
   1.28411,
   1.05536,
   1.20267};
   Double_t _fy3005[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t _felx3005[6] = {
   0.10527,
   0.222933,
   0.186159,
   0.125471,
   0.0834056,
   0.0920697};
   Double_t _fely3005[6] = {
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024};
   Double_t _fehx3005[6] = {
   0.129396,
   0.218961,
   0.205955,
   0.138865,
   0.10681,
   0.12453};
   Double_t _fehy3005[6] = {
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024};
   grae = new TGraphAsymmErrors(6,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(2);
   grae->SetLineWidth(6);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0.4852558,1.508222);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(6.00288);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3005->SetLineColor(ci);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("5p");
   
   Double_t _fx3006[6] = {
   -999,
   -999,
   -999,
   -999,
   -999,
   -999};
   Double_t _fy3006[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t _felx3006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fely3006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehy3006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(6,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(2);
   grae->SetLineWidth(6);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-999.1,-997.9);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(6);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3006->SetLineColor(ci);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("5p");
   Double_t xAxis2[2] = {-2, 3.5}; 
   Double_t yAxis2[8] = {0, 1, 2, 3, 4, 5, 6, 7}; 
   
   TH2F *dummy_ROOT_SUCKS_copy__2 = new TH2F("dummy_ROOT_SUCKS_copy__2","",1, xAxis2,7, yAxis2);
   dummy_ROOT_SUCKS_copy__2->SetDirectory(0);
   dummy_ROOT_SUCKS_copy__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS_copy__2->SetLineColor(ci);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetTitle("Parameter value");
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(6,"#mu^{#gamma#gamma}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(5,"#mu^{ZZ}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(4,"#mu^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(3,"#mu^{#tau#tau}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(2,"#mu^{bb}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(1,"#mu^{#mu#mu}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetLabelSize(0.075);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__2->Draw("sameaxis");
   TBox *box = new TBox(-1.99,6,3.485,6.98);
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
   TLegendEntry *entry=leg->AddEntry("best_fit_observed_May3_A1_5D","Observed","P");
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
   Double_t xAxis3[2] = {-2, 3.5}; 
   Double_t yAxis3[8] = {0, 1, 2, 3, 4, 5, 6, 7}; 
   
   TH2F *dummy_ROOT_SUCKS_copy__3 = new TH2F("dummy_ROOT_SUCKS_copy__3","",1, xAxis3,7, yAxis3);
   dummy_ROOT_SUCKS_copy__3->SetDirectory(0);
   dummy_ROOT_SUCKS_copy__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS_copy__3->SetLineColor(ci);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetTitle("Parameter value");
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(6,"#mu^{#gamma#gamma}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(5,"#mu^{ZZ}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(4,"#mu^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(3,"#mu^{#tau#tau}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(2,"#mu^{bb}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(1,"#mu^{#mu#mu}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetLabelSize(0.075);
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__3->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__3->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__3->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__3->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__3->Draw("sameaxis");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
