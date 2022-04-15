//----- (00000001400556B0) ----------------------------------------------------
void __fastcall sub_1400556B0(int* a1)
{
	unsigned __int64 v2; // r8
	int* v3; // rdi
	int** v4; // rax
	int* v5; // rbx
	__int64 v6; // rax
	bool v7; // zf
	char* v8; // rsi
	unsigned __int64 v9; // rbp
	__int64 v10; // r14
	__int64 v11; // rcx
	__int64 v12; // rsi
	_BYTE* v13; // rsi
	char v14[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v15; // [rsp+28h] [rbp-30h]
	_BYTE* v16; // [rsp+30h] [rbp-28h]
	__int64 v17; // [rsp+38h] [rbp-20h]
	int* v18; // [rsp+68h] [rbp+10h] BYREF

	if (qword_140C63630)
	{
		v2 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 72i64);
		v3 = 0i64;
		if (v2 && v2 <= qword_140C3FE70 && v2 + qword_140C3FE68)
		{
			v4 = sub_14018DD50(&v18, (unsigned __int16*)(v2 + qword_140C3FE68));
		}
		else
		{
			v18 = 0i64;
			v4 = &v18;
		}
		v5 = *v4;
		v15 = 0i64;
		v17 = 0i64;
		v6 = -1i64;
		do
			v7 = *((_BYTE*)v5 + ++v6) == 0;
		while (!v7);
		v8 = (char*)v5 + v6;
		v9 = v6;
		v10 = v6 + 1;
		if (v6 != -2)
		{
			v3 = sub_14018B280(v6 + 1, 0);
			v15 = v3;
			v17 = (__int64)v3 + v10;
		}
		sub_1407DB590(v3, v5, v9);
		v12 = v8 - (char*)v5;
		v7 = (int*)((char*)v3 + v12) == 0i64;
		v13 = (char*)v3 + v12;
		v16 = v13;
		if (!v7)
			*v13 = 0;
		if (v18)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
		sub_1400557F0(v11, (__int64)v14, a1);
		if (v15)
			sub_14018B900((__int64)v15, 0);
	}
}
// 1400557C3: variable 'v11' is possibly undefined
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63630: using guessed type __int64 qword_140C63630;
// 1400556B0: using guessed type char var_38[8];

