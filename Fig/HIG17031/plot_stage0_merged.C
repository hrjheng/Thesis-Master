void plot_stage0_merged()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  9 13:28:59 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,500,715);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-4.8,-1.411765,8.533333,12.70588);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.36);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.05);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[2] = {0, 8}; 
   Double_t yAxis1[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
   
   TH2F *dummy_ROOT_SUCKS__1 = new TH2F("dummy_ROOT_SUCKS__1","",1, xAxis1,12, yAxis1);
   dummy_ROOT_SUCKS__1->SetDirectory(0);
   dummy_ROOT_SUCKS__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS__1->SetLineColor(ci);
   dummy_ROOT_SUCKS__1->GetXaxis()->SetTitle("Parameter value norm. to SM prediction");
   dummy_ROOT_SUCKS__1->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__1->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(11,"#sigma_{ggH} #upoint BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(10,"#sigma_{qqH} #upoint BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(9,"#sigma_{H+V(qq)} #upoint BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(8,"#sigma_{H+W(l#nu)} #upoint BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(7,"#sigma_{H+Z(ll/#nu#nu)} #upoint BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(6,"#sigma_{ttH} #upoint BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(5,"BR^{bb}/BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(4,"BR^{#tau#tau}/BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(3,"BR^{ZZ}/BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(2,"BR^{#gamma#gamma}/BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(1,"BR^{#mu#mu}/BR^{WW}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelSize(0.075);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->Draw("");
   TLine *line = new TLine(1,0,1,11);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t negative_scans_observed_May3_stage0_fx3001[11] = {
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999};
   Double_t negative_scans_observed_May3_stage0_fy3001[11] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5};
   Double_t negative_scans_observed_May3_stage0_felx3001[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_observed_May3_stage0_fely3001[11] = {
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012};
   Double_t negative_scans_observed_May3_stage0_fehx3001[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_observed_May3_stage0_fehy3001[11] = {
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,negative_scans_observed_May3_stage0_fx3001,negative_scans_observed_May3_stage0_fy3001,negative_scans_observed_May3_stage0_felx3001,negative_scans_observed_May3_stage0_fehx3001,negative_scans_observed_May3_stage0_fely3001,negative_scans_observed_May3_stage0_fehy3001);
   grae->SetName("negative_scans_observed_May3_stage0");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_negative_scans_observed_May3_stage03001 = new TH1F("Graph_negative_scans_observed_May3_stage03001","",100,-999.1,-997.9);
   Graph_negative_scans_observed_May3_stage03001->SetMinimum(0);
   Graph_negative_scans_observed_May3_stage03001->SetMaximum(11.5144);
   Graph_negative_scans_observed_May3_stage03001->SetDirectory(0);
   Graph_negative_scans_observed_May3_stage03001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_observed_May3_stage03001->SetLineColor(ci);
   Graph_negative_scans_observed_May3_stage03001->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_observed_May3_stage03001->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_observed_May3_stage03001->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_observed_May3_stage03001->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_observed_May3_stage03001->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_observed_May3_stage03001->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_observed_May3_stage03001->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_observed_May3_stage03001->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_observed_May3_stage03001->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_observed_May3_stage03001->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_observed_May3_stage03001->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_observed_May3_stage03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_observed_May3_stage03001);
   
   grae->Draw("5");
   
   Double_t best_fit_2sig_observed_May3_stage0_fx3002[11] = {
   0.521561,
   0.869338,
   0.776893,
   0.764621,
   0.743018,
   1.39287,
   1.07,
   2.4982,
   5.002,
   0.851178,
   1.29218};
   Double_t best_fit_2sig_observed_May3_stage0_fy3002[11] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5};
   Double_t best_fit_2sig_observed_May3_stage0_felx3002[11] = {
   0.521561,
   0.245142,
   0.26326,
   0.400168,
   0.405022,
   0.656515,
   1.07,
   1.53155,
   4.1667,
   0.62925,
   0.311523};
   Double_t best_fit_2sig_observed_May3_stage0_fely3002[11] = {
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024};
   Double_t best_fit_2sig_observed_May3_stage0_fehx3002[11] = {
   2.21427,
   0.369984,
   0.38033,
   0.58476,
   0.774228,
   0.823449,
   1.62269,
   2.26063,
   5.76312,
   0.808684,
   0.350305};
   Double_t best_fit_2sig_observed_May3_stage0_fehy3002[11] = {
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024};
   grae = new TGraphAsymmErrors(11,best_fit_2sig_observed_May3_stage0_fx3002,best_fit_2sig_observed_May3_stage0_fy3002,best_fit_2sig_observed_May3_stage0_felx3002,best_fit_2sig_observed_May3_stage0_fehx3002,best_fit_2sig_observed_May3_stage0_fely3002,best_fit_2sig_observed_May3_stage0_fehy3002);
   grae->SetName("best_fit_2sig_observed_May3_stage0");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_best_fit_2sig_observed_May3_stage03002 = new TH1F("Graph_best_fit_2sig_observed_May3_stage03002","",100,0,11.84163);
   Graph_best_fit_2sig_observed_May3_stage03002->SetMinimum(0);
   Graph_best_fit_2sig_observed_May3_stage03002->SetMaximum(11.50288);
   Graph_best_fit_2sig_observed_May3_stage03002->SetDirectory(0);
   Graph_best_fit_2sig_observed_May3_stage03002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_2sig_observed_May3_stage03002->SetLineColor(ci);
   Graph_best_fit_2sig_observed_May3_stage03002->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_observed_May3_stage03002->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_observed_May3_stage03002->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_observed_May3_stage03002->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_observed_May3_stage03002->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_observed_May3_stage03002->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_observed_May3_stage03002->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_observed_May3_stage03002->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_observed_May3_stage03002->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_observed_May3_stage03002->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_observed_May3_stage03002->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_observed_May3_stage03002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_2sig_observed_May3_stage03002);
   
   grae->Draw("5");
   
   Double_t negative_scans_2sig_observed_May3_stage0_fx3003[11] = {
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999};
   Double_t negative_scans_2sig_observed_May3_stage0_fy3003[11] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5};
   Double_t negative_scans_2sig_observed_May3_stage0_felx3003[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_2sig_observed_May3_stage0_fely3003[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_2sig_observed_May3_stage0_fehx3003[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t negative_scans_2sig_observed_May3_stage0_fehy3003[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(11,negative_scans_2sig_observed_May3_stage0_fx3003,negative_scans_2sig_observed_May3_stage0_fy3003,negative_scans_2sig_observed_May3_stage0_felx3003,negative_scans_2sig_observed_May3_stage0_fehx3003,negative_scans_2sig_observed_May3_stage0_fely3003,negative_scans_2sig_observed_May3_stage0_fehy3003);
   grae->SetName("negative_scans_2sig_observed_May3_stage0");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_negative_scans_2sig_observed_May3_stage03003 = new TH1F("Graph_negative_scans_2sig_observed_May3_stage03003","",100,-999.1,-997.9);
   Graph_negative_scans_2sig_observed_May3_stage03003->SetMinimum(0);
   Graph_negative_scans_2sig_observed_May3_stage03003->SetMaximum(11.5);
   Graph_negative_scans_2sig_observed_May3_stage03003->SetDirectory(0);
   Graph_negative_scans_2sig_observed_May3_stage03003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_2sig_observed_May3_stage03003->SetLineColor(ci);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_observed_May3_stage03003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_2sig_observed_May3_stage03003);
   
   grae->Draw("5");
   
   Double_t best_fit_observed_May3_stage0_fx3004[11] = {
   0.521561,
   0.869338,
   0.776893,
   0.764621,
   0.743018,
   1.39287,
   1.07,
   2.4982,
   5.002,
   0.851178,
   1.29218};
   Double_t best_fit_observed_May3_stage0_fy3004[11] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5};
   Double_t best_fit_observed_May3_stage0_felx3004[11] = {
   0.521561,
   0.132594,
   0.143594,
   0.216153,
   0.228529,
   0.3449,
   0.551353,
   0.84109,
   2.25318,
   0.327995,
   0.158661};
   Double_t best_fit_observed_May3_stage0_fely3004[11] = {
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012};
   Double_t best_fit_observed_May3_stage0_fehx3004[11] = {
   1.0685,
   0.162297,
   0.17117,
   0.259751,
   0.30831,
   0.390395,
   0.699443,
   1.02725,
   2.64884,
   0.377892,
   0.170838};
   Double_t best_fit_observed_May3_stage0_fehy3004[11] = {
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012,
   0.012};
   grae = new TGraphAsymmErrors(11,best_fit_observed_May3_stage0_fx3004,best_fit_observed_May3_stage0_fy3004,best_fit_observed_May3_stage0_felx3004,best_fit_observed_May3_stage0_fehx3004,best_fit_observed_May3_stage0_fely3004,best_fit_observed_May3_stage0_fehy3004);
   grae->SetName("best_fit_observed_May3_stage0");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_best_fit_observed_May3_stage03004 = new TH1F("Graph_best_fit_observed_May3_stage03004","",100,0,8.415924);
   Graph_best_fit_observed_May3_stage03004->SetMinimum(0);
   Graph_best_fit_observed_May3_stage03004->SetMaximum(11.5144);
   Graph_best_fit_observed_May3_stage03004->SetDirectory(0);
   Graph_best_fit_observed_May3_stage03004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_observed_May3_stage03004->SetLineColor(ci);
   Graph_best_fit_observed_May3_stage03004->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_observed_May3_stage03004->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_observed_May3_stage03004->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_observed_May3_stage03004->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_observed_May3_stage03004->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_observed_May3_stage03004->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_observed_May3_stage03004->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_observed_May3_stage03004->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_observed_May3_stage03004->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_observed_May3_stage03004->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_observed_May3_stage03004->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_observed_May3_stage03004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_observed_May3_stage03004);
   
   grae->Draw("5p");
   
   Double_t _fx3005[11] = {
   0.521561,
   0.869338,
   0.776893,
   0.764621,
   0.743018,
   1.39287,
   1.07,
   2.4982,
   5.002,
   0.851178,
   1.29218};
   Double_t _fy3005[11] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5};
   Double_t _felx3005[11] = {
   0,
   0.0834729,
   0.0766509,
   0.162883,
   0.156195,
   0.255018,
   0.224599,
   0.495008,
   1.01935,
   0.165726,
   0.120777};
   Double_t _fely3005[11] = {
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024};
   Double_t _fehx3005[11] = {
   0.174566,
   0.110121,
   0.102904,
   0.205719,
   0.22716,
   0.301164,
   0.369798,
   0.635306,
   1.32564,
   0.199494,
   0.13467};
   Double_t _fehy3005[11] = {
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024,
   0.0024};
   grae = new TGraphAsymmErrors(11,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(2);
   grae->SetLineWidth(6);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,6.908248);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(11.50288);
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
   
   Double_t _fx3006[11] = {
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999};
   Double_t _fy3006[11] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5};
   Double_t _felx3006[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fely3006[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3006[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehy3006[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(11,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(2);
   grae->SetLineWidth(6);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-999.1,-997.9);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(11.5);
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
   Double_t xAxis2[2] = {0, 8}; 
   Double_t yAxis2[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
   
   TH2F *dummy_ROOT_SUCKS_copy__2 = new TH2F("dummy_ROOT_SUCKS_copy__2","",1, xAxis2,12, yAxis2);
   dummy_ROOT_SUCKS_copy__2->SetDirectory(0);
   dummy_ROOT_SUCKS_copy__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS_copy__2->SetLineColor(ci);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetTitle("Parameter value norm. to SM prediction");
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(11,"#sigma_{ggH} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(10,"#sigma_{qqH} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(9,"#sigma_{H+V(qq)} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(8,"#sigma_{H+W(l#nu)} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(7,"#sigma_{H+Z(ll/#nu#nu)} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(6,"#sigma_{ttH} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(5,"BR^{bb}/BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(4,"BR^{#tau#tau}/BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(3,"BR^{ZZ}/BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(2,"BR^{#gamma#gamma}/BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(1,"BR^{#mu#mu}/BR^{WW}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetLabelSize(0.075);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__2->Draw("sameaxis");
   TBox *box = new TBox(0.01,11,7.985,11.98);
   box->SetFillColor(10);
   box->Draw();
   TLatex *   tex = new TLatex(0.38,0.9,"#bf{CMS}");
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
   TLegendEntry *entry=leg->AddEntry("best_fit_observed_May3_stage0","Observed","P");
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
   Double_t xAxis3[2] = {0, 8}; 
   Double_t yAxis3[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
   
   TH2F *dummy_ROOT_SUCKS_copy__3 = new TH2F("dummy_ROOT_SUCKS_copy__3","",1, xAxis3,12, yAxis3);
   dummy_ROOT_SUCKS_copy__3->SetDirectory(0);
   dummy_ROOT_SUCKS_copy__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS_copy__3->SetLineColor(ci);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetTitle("Parameter value norm. to SM prediction");
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(11,"#sigma_{ggH} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(10,"#sigma_{qqH} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(9,"#sigma_{H+V(qq)} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(8,"#sigma_{H+W(l#nu)} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(7,"#sigma_{H+Z(ll/#nu#nu)} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(6,"#sigma_{ttH} #upoint BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(5,"BR^{bb}/BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(4,"BR^{#tau#tau}/BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(3,"BR^{ZZ}/BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(2,"BR^{#gamma#gamma}/BR^{WW}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(1,"BR^{#mu#mu}/BR^{WW}");
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
