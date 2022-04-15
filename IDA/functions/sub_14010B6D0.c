//----- (000000014010B6D0) ----------------------------------------------------
void __fastcall sub_14010B6D0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rax
	int* v7; // rbx
	int* v8; // rax
	__int64 v9; // rax
	int* v10; // rax
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // rax
	int* v14; // rax
	__int64 v15; // rax
	int* v16; // rax
	__int64 v17; // rax
	int* v18; // rax
	__int64 v19; // rax
	int* v20; // rax
	__int64 v21; // rax
	int* v22; // rax
	__int64 v23; // rax

	v6 = sub_1401A6B80(a3, L"ButtonClick");
	v7 = 0i64;
	if (v6)
		v8 = (int*)sub_1401A4F40(v6 + 32);
	else
		v8 = 0i64;
	sub_14010AEB0(a1 + 192, a2, v8);
	v9 = sub_1401A6B80(a3, L"ButtonDown");
	if (v9)
		v10 = (int*)sub_1401A4F40(v9 + 32);
	else
		v10 = 0i64;
	sub_14010AEB0(a1 + 112, a2, v10);
	v11 = sub_1401A6B80(a3, L"ButtonUpCancel");
	if (v11)
		v12 = (int*)sub_1401A4F40(v11 + 32);
	else
		v12 = 0i64;
	sub_14010AEB0(a1 + 152, a2, v12);
	v13 = sub_1401A6B80(a3, L"ButtonCheck");
	if (v13)
		v14 = (int*)sub_1401A4F40(v13 + 32);
	else
		v14 = 0i64;
	sub_14010AEB0(a1 + 232, a2, v14);
	v15 = sub_1401A6B80(a3, L"ButtonUncheck");
	if (v15)
		v16 = (int*)sub_1401A4F40(v15 + 32);
	else
		v16 = 0i64;
	sub_14010AEB0(a1 + 272, a2, v16);
	v17 = sub_1401A6B80(a3, L"MouseEnter");
	if (v17)
		v18 = (int*)sub_1401A4F40(v17 + 32);
	else
		v18 = 0i64;
	sub_14010AEB0(a1 + 32, a2, v18);
	v19 = sub_1401A6B80(a3, L"MouseLeave");
	if (v19)
		v20 = (int*)sub_1401A4F40(v19 + 32);
	else
		v20 = 0i64;
	sub_14010AEB0(a1 + 72, a2, v20);
	v21 = sub_1401A6B80(a3, L"WindowInvoke");
	if (v21)
		v22 = (int*)sub_1401A4F40(v21 + 32);
	else
		v22 = 0i64;
	sub_14010AEB0(a1 + 352, a2, v22);
	v23 = sub_1401A6B80(a3, L"WindowClose");
	if (v23)
		v7 = (int*)sub_1401A4F40(v23 + 32);
	sub_14010AEB0(a1 + 312, a2, v7);
}
// 140A32B58: using guessed type wchar_t aMouseleave[11];
// 140A32B70: using guessed type wchar_t aMouseenter[11];
// 140A32C18: using guessed type wchar_t aWindowinvoke[13];
// 140A32C38: using guessed type wchar_t aButtonuncheck[14];
// 140A32C70: using guessed type wchar_t aWindowclose[12];
// 140A32C88: using guessed type wchar_t aButtonupcancel[15];
// 140A32CA8: using guessed type wchar_t aButtondown[11];
// 140A32CC0: using guessed type wchar_t aButtoncheck[12];
// 140A32CD8: using guessed type wchar_t aButtonclick[12];

