//----- (000000014012A350) ----------------------------------------------------
__int64 __fastcall sub_14012A350(__int64 a1)
{
	int v2; // r8d
	__int64 v3; // rdx
	char* v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rdi
	__int64 v8; // rax
	unsigned int* v9; // r9
	unsigned __int64* v10; // rdi
	__int64 v11; // rax
	unsigned __int64 v12; // rsi
	__int64* v13; // r14
	__int64 v14; // rbp
	__int64 v15; // rax
	__int64 v16; // r8
	_QWORD* v17; // rax
	__int64 v18; // rcx
	__int64* v19; // rax
	unsigned __int64 v20; // r8
	__int64* v21; // rbp
	__int64 v22; // rax
	unsigned int* v23; // r9
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	__int64 v26; // rdi
	__int64 v27; // rax
	unsigned int* v28; // r9
	unsigned __int64* v29; // rdx
	__int64 v30; // rdi
	__int64 v31; // rax
	unsigned int* v32; // r9
	__int64 result; // rax
	__int64 v34; // [rsp+20h] [rbp-4048h] BYREF
	__int64 v35; // [rsp+28h] [rbp-4040h]
	__int64 v36[2]; // [rsp+30h] [rbp-4038h]
	__int64 v37[2048]; // [rsp+40h] [rbp-4028h] BYREF

	sub_1407E4830((int*)v37, 0i64, 0x4000ui64);
	v2 = 0;
	v3 = 0i64;
	do
	{
		v4 = (&off_140C575A0)[v3];
		++v2;
		v3 += 2i64;
		v36[v3] = (__int64)v4;
		v36[v3 + 1] = (__int64)(&off_140C575A0)[v3 - 1];
	} while ((unsigned __int64)v2 < 0xE);
	v5 = *(_QWORD**)(a1 + 400);
	sub_1400569B0((__int64)v5, (unsigned __int64*)"Apollo.XmlDoc");
	v6 = v5[2];
	*(_QWORD*)v6 = *(_QWORD*)(v6 - 16);
	*(_DWORD*)(v6 + 8) = *(_DWORD*)(v6 - 8);
	v5[2] += 16i64;
	v7 = v5[2];
	v8 = sub_140062650((__int64)v5, (unsigned __int64*)"__index", 7ui64);
	v9 = (unsigned int*)(v5[2] - 16i64);
	v34 = v8;
	LODWORD(v35) = 4;
	sub_14005EA50((__int64)v5, (__int64*)(v7 - 32), (int*)&v34, v9);
	v5[2] -= 16i64;
	v10 = (unsigned __int64*)v37[0];
	v11 = v5[2];
	v12 = -1i64;
	v13 = v37;
	if (v37[0])
	{
		do
		{
			v14 = v13[1];
			if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
				sub_14005E2C0((__int64)v5);
			v15 = v5[5];
			if (v15 == v5[10])
				v16 = v5[15];
			else
				v16 = *(_QWORD*)(**(_QWORD**)(v15 + 8) + 24i64);
			v17 = sub_140060AB0((__int64)v5, 0, v16);
			v17[4] = v14;
			v18 = v5[2];
			*(_QWORD*)v18 = v17;
			*(_DWORD*)(v18 + 8) = 6;
			v5[2] += 16i64;
			v19 = (__int64*)sub_1400580E0((__int64)v5, -2);
			v20 = -1i64;
			v21 = v19;
			do
				++v20;
			while (*((_BYTE*)v10 + v20));
			v22 = sub_140062650((__int64)v5, v10, v20);
			v23 = (unsigned int*)(v5[2] - 16i64);
			v34 = v22;
			LODWORD(v35) = 4;
			sub_14005EA50((__int64)v5, v21, (int*)&v34, v23);
			v5[2] -= 16i64;
			v10 = (unsigned __int64*)v13[2];
			v11 = v5[2];
			v13 += 2;
		} while (v10);
	}
	v5[2] = v11 - 16;
	sub_140057020(v5, "XmlDoc", &off_140B57BF0);
	v24 = (unsigned __int64*)sub_14018F0E0(&v34, L"__XmlNode")[1];
	if (v24)
	{
		v25 = -1i64;
		do
			++v25;
		while (*((_BYTE*)v24 + v25));
		sub_140058710((__int64)v5, v24, v25);
	}
	else
	{
		*(_DWORD*)(v5[2] + 8i64) = 0;
		v5[2] += 16i64;
	}
	if (v35)
		sub_14018B900(v35, 0);
	v26 = v5[2];
	v27 = sub_140062650((__int64)v5, (unsigned __int64*)"Node", 4ui64);
	v28 = (unsigned int*)(v5[2] - 16i64);
	v34 = v27;
	LODWORD(v35) = 4;
	sub_14005EA50((__int64)v5, (__int64*)(v26 - 32), (int*)&v34, v28);
	v5[2] -= 16i64;
	v29 = (unsigned __int64*)sub_14018F0E0(&v34, L"__XmlText")[1];
	if (v29)
	{
		do
			++v12;
		while (*((_BYTE*)v29 + v12));
		sub_140058710((__int64)v5, v29, v12);
	}
	else
	{
		*(_DWORD*)(v5[2] + 8i64) = 0;
		v5[2] += 16i64;
	}
	if (v35)
		sub_14018B900(v35, 0);
	v30 = v5[2];
	v31 = sub_140062650((__int64)v5, (unsigned __int64*)"Text", 4ui64);
	v32 = (unsigned int*)(v5[2] - 16i64);
	v34 = v31;
	LODWORD(v35) = 4;
	result = sub_14005EA50((__int64)v5, (__int64*)(v30 - 32), (int*)&v34, v32);
	v5[2] -= 32i64;
	return result;
}
// 140A204D8: using guessed type wchar_t aXmlnode[10];
// 140A204F0: using guessed type wchar_t aXmltext[10];
// 140B57BF0: using guessed type char *off_140B57BF0;
// 140C575A0: using guessed type char *off_140C575A0;

