//----- (00000001403309A0) ----------------------------------------------------
void __fastcall sub_1403309A0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
	int v9; // r13d
	__int64 v10; // rdi
	unsigned __int64 v11; // rsi
	_QWORD* v12; // rbx
	int* v13; // rbx
	int* v14; // rsi
	__int64 v15; // rax
	bool v16; // zf
	char* v17; // r14
	unsigned __int64 v18; // r15
	_BYTE* v19; // r14
	int* v20; // rbx
	int* v21; // rsi
	__int64 v22; // rax
	char* v23; // r14
	unsigned __int64 v24; // r15
	_BYTE* v25; // r14
	int v26; // ebx
	unsigned __int64 v27; // r15
	int** v28; // r14
	int* v29; // rax
	int* v30; // rsi
	int* v31; // rbx
	int* v32; // rcx
	__int64 v33; // r8
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-E0h] BYREF
	int* v35; // [rsp+28h] [rbp-D8h]
	LPVOID lpTlsValue; // [rsp+30h] [rbp-D0h]
	__int64(__fastcall * *v37)(); // [rsp+40h] [rbp-C0h] BYREF
	int* v38; // [rsp+48h] [rbp-B8h]
	LPVOID v39; // [rsp+50h] [rbp-B0h]
	__int64 v40; // [rsp+60h] [rbp-A0h] BYREF
	int* v41; // [rsp+68h] [rbp-98h]
	unsigned int v42; // [rsp+80h] [rbp-80h]
	__int64 v43; // [rsp+88h] [rbp-78h]
	__int64 v44; // [rsp+90h] [rbp-70h]
	__int64 v45; // [rsp+98h] [rbp-68h]
	__int64 v46; // [rsp+A0h] [rbp-60h]
	_QWORD v47[4]; // [rsp+A8h] [rbp-58h] BYREF
	int v48; // [rsp+C8h] [rbp-38h]
	int v49[2]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v50; // [rsp+D8h] [rbp-28h]
	__int64 v51; // [rsp+E0h] [rbp-20h]
	__int64 v52; // [rsp+E8h] [rbp-18h]
	__int64 v53; // [rsp+F0h] [rbp-10h]
	__int64 v54; // [rsp+F8h] [rbp-8h]
	int v55; // [rsp+100h] [rbp+0h]
	__int64 v56; // [rsp+108h] [rbp+8h]
	__int64 v57; // [rsp+110h] [rbp+10h] BYREF
	__int64 v58; // [rsp+118h] [rbp+18h]
	unsigned int v59; // [rsp+168h] [rbp+68h] BYREF

	v59 = a2;
	v45 = a5;
	v42 = a2;
	v43 = a3;
	v44 = a4;
	v46 = a6;
	if (qword_140C65828)
		sub_140335F10(v47, a2);
	else
		sub_14018EE90(v47, (__int64)"Message Id #%d", a2);
	v9 = a7;
	v10 = a1 + 128;
	v49[0] = a2;
	v56 = 0i64;
	v48 = a7;
	v49[1] = 0;
	v50 = 0i64;
	v51 = -1i64;
	v52 = 0i64;
	v53 = 0i64;
	v54 = 0i64;
	v55 = 0;
	v11 = (*(__int64(__fastcall**)(unsigned int*))(v10 + 24))(&v59);
	v12 = *(_QWORD**)(*(_QWORD*)(v10 + 16) + 8 * (v11 % *(_QWORD*)(v10 + 8)));
	if (v12)
	{
		while (v11 != *v12 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v10 + 32))(&v59, v12 + 2))
		{
			v12 = (_QWORD*)v12[1];
			if (!v12)
				goto LABEL_47;
		}
		if (v12 != (_QWORD*)-24i64)
		{
			if (qword_140C65828)
			{
				if (v59 < 3)
				{
					sub_14018EE90(&v37, (__int64)"Base Message Id #%d", v59);
					v14 = v38;
				}
				else if (v59 < dword_140C1E564 && (v13 = *(int**)(qword_140C65828 + 16i64 * (v59 - 3) + 8)) != 0i64)
				{
					v14 = 0i64;
					v15 = -1i64;
					do
						v16 = *((_BYTE*)v13 + ++v15) == 0;
					while (!v16);
					v17 = (char*)v13 + v15;
					v18 = v15;
					if (v15 != -2)
						v14 = sub_14018B280(v15 + 1, 0);
					sub_1407DB590(v14, v13, v18);
					v19 = (char*)v14 + v17 - (char*)v13;
					if (v19)
						*v19 = 0;
				}
				else
				{
					sub_14018EE90(&v37, (__int64)"Invalid or foreign Message Id #%d", v59);
					v14 = v38;
				}
			}
			else
			{
				sub_14018EE90(&v37, (__int64)"Message Id #%d", v59);
				v14 = v38;
			}
			a5 = sub_14018EE90(&v40, (__int64)"Duplicate message registration id: %s", (const char*)v14)[1] + 19899968i64;
			sub_1401A2E50(0xBu, 0, &a5);
			if (v41)
				sub_14018B900((__int64)v41, 0);
			if (v14)
				sub_14018B900((__int64)v14, 0);
			v35 = 0i64;
			TlsValue = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v37 = TlsValue;
			v38 = v35;
			v39 = lpTlsValue;
			if (qword_140C65828)
			{
				if (v59 < 3)
				{
					sub_14018EE90(&v40, (__int64)"Base Message Id #%d");
				}
				else
				{
					if (v59 < dword_140C1E564)
					{
						v20 = *(int**)(qword_140C65828 + 16i64 * (v59 - 3) + 8);
						if (v20)
						{
							v21 = 0i64;
							v22 = -1i64;
							do
								v16 = *((_BYTE*)v20 + ++v22) == 0;
							while (!v16);
							v23 = (char*)v20 + v22;
							v24 = v22;
							if (v22 != -2)
								v21 = sub_14018B280(v22 + 1, 0);
							sub_1407DB590(v21, v20, v24);
							v25 = (char*)v21 + v23 - (char*)v20;
							if (v25)
								*v25 = 0;
							goto LABEL_41;
						}
					}
					sub_14018EE90(&v40, (__int64)"Invalid or foreign Message Id #%d");
				}
			}
			else
			{
				sub_14018EE90(&v40, (__int64)"Message Id #%d");
			}
			v21 = v41;
		LABEL_41:
			a5 = sub_14018EE90(&v57, (__int64)"Duplicate message registration id: %s", (const char*)v21)[1] + 19899968i64;
			v26 = sub_140196F30(&dword_140C8A61C, 11, &a5, &v37);
			if (v58)
				sub_14018B900(v58, 0);
			if (v21)
				sub_14018B900((__int64)v21, 0);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v26)
				DebugBreak();
		}
	}
LABEL_47:
	if (*(_QWORD*)v10 == *(_QWORD*)(v10 + 8))
		sub_1400290D0(v10);
	v27 = (*(__int64(__fastcall**)(unsigned int*))(v10 + 24))(&v59);
	v28 = (int**)(*(_QWORD*)(v10 + 16) + 8 * (v27 % *(_QWORD*)(v10 + 8)));
	v29 = sub_14018B280(168i64, 0);
	v30 = (int*)v47[1];
	v31 = v29;
	if (v29)
	{
		v32 = *v28;
		v33 = v47[2];
		*(_QWORD*)v29 = v27;
		*((_QWORD*)v29 + 1) = v32;
		v29[4] = v59;
		v29[6] = v42;
		*((_QWORD*)v29 + 4) = v43;
		*((_QWORD*)v29 + 5) = v44;
		*((_QWORD*)v29 + 6) = v45;
		*((_QWORD*)v29 + 7) = v46;
		*((_QWORD*)v29 + 9) = 0i64;
		*((_QWORD*)v29 + 10) = 0i64;
		*((_QWORD*)v29 + 11) = 0i64;
		sub_14001B240((_QWORD*)v29 + 8, v30, v33);
		v31[24] = v9;
		v31[26] = a2;
		*((_QWORD*)v31 + 20) = 0i64;
		v31[27] = 0;
		*((_QWORD*)v31 + 14) = 0i64;
		*((_QWORD*)v31 + 15) = -1i64;
		*((_QWORD*)v31 + 16) = 0i64;
		*((_QWORD*)v31 + 17) = 0i64;
		*((_QWORD*)v31 + 18) = 0i64;
		v31[38] = 0;
		sub_140334740((__int64)(v31 + 26), (__int64)v49);
	}
	else
	{
		v31 = 0i64;
	}
	*v28 = v31;
	++* (_QWORD*)v10;
	if (v30)
		sub_14018B900((__int64)v30, 0);
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C1E564: using guessed type int dword_140C1E564;
// 140C65828: using guessed type __int64 qword_140C65828;
// 140C8A61C: using guessed type _DWORD dword_140C8A61C;

