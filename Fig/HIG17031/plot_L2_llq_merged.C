void plot_L2_llq_merged()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  9 13:30:07 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,420,380);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-3.857143,-0.4,3.285714,3.6);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.26);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.05);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[2] = {-2, 3}; 
   Double_t yAxis1[5] = {0, 1, 2, 3, 3.4}; 
   
   TH2F *dummy_ROOT_SUCKS__1 = new TH2F("dummy_ROOT_SUCKS__1","",1, xAxis1,4, yAxis1);
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
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(3,"#lambda_{lq}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(2,"#lambda_{Vq}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetBinLabel(1,"#kappa_{qq}");
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetLabelSize(0.1);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS__1->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS__1->Draw("");
   TLine *line = new TLine(1,0,1,3);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t negative_scans_neg_observed_May3_L2_llq_fx3001[3] = {
   -999,
   -999,
   -0.9168265};
   Double_t negative_scans_neg_observed_May3_L2_llq_fy3001[3] = {
   0.5,
   1.5,
   2.5};
   Double_t negative_scans_neg_observed_May3_L2_llq_felx3001[3] = {
   0,
   0,
   0.1272635};
   Double_t negative_scans_neg_observed_May3_L2_llq_fely3001[3] = {
   0.012,
   0.012,
   0.012};
   Double_t negative_scans_neg_observed_May3_L2_llq_fehx3001[3] = {
   0,
   0,
   0.1272635};
   Double_t negative_scans_neg_observed_May3_L2_llq_fehy3001[3] = {
   0.012,
   0.012,
   0.012};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,negative_scans_neg_observed_May3_L2_llq_fx3001,negative_scans_neg_observed_May3_L2_llq_fy3001,negative_scans_neg_observed_May3_L2_llq_felx3001,negative_scans_neg_observed_May3_L2_llq_fehx3001,negative_scans_neg_observed_May3_L2_llq_fely3001,negative_scans_neg_observed_May3_L2_llq_fehy3001);
   grae->SetName("negative_scans_neg_observed_May3_L2_llq");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_negative_scans_neg_observed_May3_L2_llq3001 = new TH1F("Graph_negative_scans_neg_observed_May3_L2_llq3001","",100,-1098.821,0);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->SetMinimum(0.2856);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->SetMaximum(2.7144);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->SetDirectory(0);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_neg_observed_May3_L2_llq3001->SetLineColor(ci);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_neg_observed_May3_L2_llq3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_neg_observed_May3_L2_llq3001);
   
   grae->Draw("5");
   
   Double_t best_fit_2sig_neg_observed_May3_L2_llq_fx3002[3] = {
   1.10444,
   0.988842,
   0.915301};
   Double_t best_fit_2sig_neg_observed_May3_L2_llq_fy3002[3] = {
   0.5,
   1.5,
   2.5};
   Double_t best_fit_2sig_neg_observed_May3_L2_llq_felx3002[3] = {
   0.243318,
   0.159202,
   0.257848};
   Double_t best_fit_2sig_neg_observed_May3_L2_llq_fely3002[3] = {
   0.0024,
   0.0024,
   0.0024};
   Double_t best_fit_2sig_neg_observed_May3_L2_llq_fehx3002[3] = {
   0.269299,
   0.203286,
   0.270431};
   Double_t best_fit_2sig_neg_observed_May3_L2_llq_fehy3002[3] = {
   0.0024,
   0.0024,
   0.0024};
   grae = new TGraphAsymmErrors(3,best_fit_2sig_neg_observed_May3_L2_llq_fx3002,best_fit_2sig_neg_observed_May3_L2_llq_fy3002,best_fit_2sig_neg_observed_May3_L2_llq_felx3002,best_fit_2sig_neg_observed_May3_L2_llq_fehx3002,best_fit_2sig_neg_observed_May3_L2_llq_fely3002,best_fit_2sig_neg_observed_May3_L2_llq_fehy3002);
   grae->SetName("best_fit_2sig_neg_observed_May3_L2_llq");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_best_fit_2sig_neg_observed_May3_L2_llq3002 = new TH1F("Graph_best_fit_2sig_neg_observed_May3_L2_llq3002","",100,0.5858244,1.445368);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->SetMinimum(0.29712);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->SetMaximum(2.70288);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->SetDirectory(0);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->SetLineColor(ci);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_2sig_neg_observed_May3_L2_llq3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_2sig_neg_observed_May3_L2_llq3002);
   
   grae->Draw("5");
   
   Double_t negative_scans_2sig_neg_observed_May3_L2_llq_fx3003[3] = {
   -999,
   -999,
   -0.921264};
   Double_t negative_scans_2sig_neg_observed_May3_L2_llq_fy3003[3] = {
   0.5,
   1.5,
   2.5};
   Double_t negative_scans_2sig_neg_observed_May3_L2_llq_felx3003[3] = {
   0,
   0,
   0.262586};
   Double_t negative_scans_2sig_neg_observed_May3_L2_llq_fely3003[3] = {
   0,
   0,
   0};
   Double_t negative_scans_2sig_neg_observed_May3_L2_llq_fehx3003[3] = {
   0,
   0,
   0.262586};
   Double_t negative_scans_2sig_neg_observed_May3_L2_llq_fehy3003[3] = {
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(3,negative_scans_2sig_neg_observed_May3_L2_llq_fx3003,negative_scans_2sig_neg_observed_May3_L2_llq_fy3003,negative_scans_2sig_neg_observed_May3_L2_llq_felx3003,negative_scans_2sig_neg_observed_May3_L2_llq_fehx3003,negative_scans_2sig_neg_observed_May3_L2_llq_fely3003,negative_scans_2sig_neg_observed_May3_L2_llq_fehy3003);
   grae->SetName("negative_scans_2sig_neg_observed_May3_L2_llq");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003 = new TH1F("Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003","",100,-1098.834,0);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->SetMinimum(0.3);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->SetMaximum(2.7);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->SetDirectory(0);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->SetLineColor(ci);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetXaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetXaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetXaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetXaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetYaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetYaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetYaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetYaxis()->SetTitleFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetZaxis()->SetLabelFont(42);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetZaxis()->SetLabelSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetZaxis()->SetTitleSize(0.035);
   Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_negative_scans_2sig_neg_observed_May3_L2_llq3003);
   
   grae->Draw("5");
   
   Double_t best_fit_neg_observed_May3_L2_llq_fx3004[3] = {
   1.10444,
   0.988842,
   0.915301};
   Double_t best_fit_neg_observed_May3_L2_llq_fy3004[3] = {
   0.5,
   1.5,
   2.5};
   Double_t best_fit_neg_observed_May3_L2_llq_felx3004[3] = {
   0.123151,
   0.0843874,
   0.128266};
   Double_t best_fit_neg_observed_May3_L2_llq_fely3004[3] = {
   0.012,
   0.012,
   0.012};
   Double_t best_fit_neg_observed_May3_L2_llq_fehx3004[3] = {
   0.128519,
   0.0971463,
   0.131647};
   Double_t best_fit_neg_observed_May3_L2_llq_fehy3004[3] = {
   0.012,
   0.012,
   0.012};
   grae = new TGraphAsymmErrors(3,best_fit_neg_observed_May3_L2_llq_fx3004,best_fit_neg_observed_May3_L2_llq_fy3004,best_fit_neg_observed_May3_L2_llq_felx3004,best_fit_neg_observed_May3_L2_llq_fehx3004,best_fit_neg_observed_May3_L2_llq_fely3004,best_fit_neg_observed_May3_L2_llq_fehy3004);
   grae->SetName("best_fit_neg_observed_May3_L2_llq");
   grae->SetTitle("");
   grae->SetFillColor(4);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_best_fit_neg_observed_May3_L2_llq3004 = new TH1F("Graph_best_fit_neg_observed_May3_L2_llq3004","",100,0.7424426,1.277551);
   Graph_best_fit_neg_observed_May3_L2_llq3004->SetMinimum(0.2856);
   Graph_best_fit_neg_observed_May3_L2_llq3004->SetMaximum(2.7144);
   Graph_best_fit_neg_observed_May3_L2_llq3004->SetDirectory(0);
   Graph_best_fit_neg_observed_May3_L2_llq3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_best_fit_neg_observed_May3_L2_llq3004->SetLineColor(ci);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetXaxis()->SetLabelFont(42);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetXaxis()->SetLabelSize(0.035);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetXaxis()->SetTitleSize(0.035);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetXaxis()->SetTitleFont(42);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetYaxis()->SetLabelFont(42);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetYaxis()->SetLabelSize(0.035);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetYaxis()->SetTitleSize(0.035);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetYaxis()->SetTitleFont(42);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetZaxis()->SetLabelFont(42);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetZaxis()->SetLabelSize(0.035);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetZaxis()->SetTitleSize(0.035);
   Graph_best_fit_neg_observed_May3_L2_llq3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_best_fit_neg_observed_May3_L2_llq3004);
   
   grae->Draw("5p");
   Double_t xAxis2[2] = {-2, 3}; 
   Double_t yAxis2[5] = {0, 1, 2, 3, 3.4}; 
   
   TH2F *dummy_ROOT_SUCKS_copy__2 = new TH2F("dummy_ROOT_SUCKS_copy__2","",1, xAxis2,4, yAxis2);
   dummy_ROOT_SUCKS_copy__2->SetDirectory(0);
   dummy_ROOT_SUCKS_copy__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS_copy__2->SetLineColor(ci);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetTitle("Parameter value");
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(3,"#lambda_{lq}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(2,"#lambda_{Vq}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetBinLabel(1,"#kappa_{qq}");
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetLabelSize(0.1);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetYaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__2->GetZaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__2->Draw("sameaxis");
   TBox *box = new TBox(-1.99,3,2.985,3.38);
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
   TLegendEntry *entry=leg->AddEntry("best_fit_neg_observed_May3_L2_llq","Observed","P");
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
   Double_t xAxis3[2] = {-2, 3}; 
   Double_t yAxis3[5] = {0, 1, 2, 3, 3.4}; 
   
   TH2F *dummy_ROOT_SUCKS_copy__3 = new TH2F("dummy_ROOT_SUCKS_copy__3","",1, xAxis3,4, yAxis3);
   dummy_ROOT_SUCKS_copy__3->SetDirectory(0);
   dummy_ROOT_SUCKS_copy__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   dummy_ROOT_SUCKS_copy__3->SetLineColor(ci);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetTitle("Parameter value");
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetLabelSize(0.035);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetTitleSize(0.035);
   dummy_ROOT_SUCKS_copy__3->GetXaxis()->SetTitleFont(42);
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(3,"#lambda_{lq}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(2,"#lambda_{Vq}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetBinLabel(1,"#kappa_{qq}");
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetLabelFont(42);
   dummy_ROOT_SUCKS_copy__3->GetYaxis()->SetLabelSize(0.1);
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
