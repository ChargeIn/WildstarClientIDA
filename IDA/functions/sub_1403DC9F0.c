#include "../winhttp.h"

//----- (00000001403DC9F0) ----------------------------------------------------
__int64 __fastcall sub_1403DC9F0(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
	const wchar_t* v4; // rdi
	const wchar_t* v5; // r12
	__int64 v6; // rax
	__int64 v7; // r10
	__int64 v8; // rcx
	__int64 v9; // rdx
	bool v10; // cf
	__int64 v12; // r13
	_DWORD* v13; // rax
	_DWORD* v14; // r14
	int v15; // ebx
	void* v16; // rdx
	unsigned int v17; // eax
	unsigned __int64 v18; // rcx
	const __m128i* v19; // rcx
	const __m128i* v20; // rax
	__int64 v21; // rax
	unsigned __int64 v22; // rax
	unsigned __int64 v23; // rcx
	__int64 v24; // rcx
	int v25; // eax
	const __m128i* v26; // rbx
	__int64 v27; // rax
	_DWORD* v28; // rcx
	int v29; // edi
	__int64 v30; // rdx
	int* v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // [rsp+20h] [rbp-E0h]
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v36; // [rsp+48h] [rbp-B8h]
	LPVOID Value; // [rsp+50h] [rbp-B0h]
	const __m128i* v38[2]; // [rsp+58h] [rbp-A8h] BYREF
	__int64(__fastcall * *v39)(); // [rsp+68h] [rbp-98h] BYREF
	const wchar_t* v40; // [rsp+70h] [rbp-90h]
	LPVOID v41; // [rsp+78h] [rbp-88h]
	const wchar_t* v42; // [rsp+80h] [rbp-80h]
	__int64(__fastcall * *v43)(); // [rsp+88h] [rbp-78h] BYREF
	const wchar_t* v44; // [rsp+90h] [rbp-70h]
	LPVOID lpTlsValue; // [rsp+98h] [rbp-68h]
	const wchar_t* v46; // [rsp+A0h] [rbp-60h]
	__int64(__fastcall * *v47)(); // [rsp+B0h] [rbp-50h] BYREF
	__int64 v48; // [rsp+B8h] [rbp-48h]
	LPVOID v49; // [rsp+C0h] [rbp-40h]
	int* v50; // [rsp+D0h] [rbp-30h] BYREF
	int* v51; // [rsp+D8h] [rbp-28h] BYREF
	__int64 v52; // [rsp+E0h] [rbp-20h] BYREF
	__int64(__fastcall * *v53)(); // [rsp+F0h] [rbp-10h] BYREF
	const wchar_t* v54; // [rsp+F8h] [rbp-8h]
	LPVOID v55; // [rsp+100h] [rbp+0h]
	const wchar_t* v56; // [rsp+108h] [rbp+8h]
	__int64(__fastcall * *v57)(); // [rsp+110h] [rbp+10h] BYREF
	const wchar_t* v58; // [rsp+118h] [rbp+18h]
	LPVOID v59; // [rsp+120h] [rbp+20h]
	const wchar_t* v60; // [rsp+128h] [rbp+28h]
	__int64 v61; // [rsp+170h] [rbp+70h] BYREF
	int v62; // [rsp+188h] [rbp+88h]

	v62 = a4;
	v61 = a1;
	v4 = (const wchar_t*)a2;
	v5 = (const wchar_t*)a3;
	v6 = *(_QWORD*)(qword_140C65898 + 29304);
	v50 = (int*)qword_140C65898;
	v7 = *(_QWORD*)(qword_140C65898 + 29304);
	v51 = (int*)(qword_140C65898 + 29296);
	v8 = *(_QWORD*)(v7 + 8);
	v9 = v7;
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < (unsigned int)v4)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v9 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v9 == v7 || (v10 = (unsigned int)v4 < *(_DWORD*)(v9 + 32), v61 = v9, v10))
		v61 = v7;
	if (v61 != v6)
		return 0i64;
	v12 = sub_14024C200((unsigned int)v4);
	v13 = (_DWORD*)sub_14024ACC0((unsigned int)v5);
	v14 = v13;
	if (!v12)
	{
		TlsValue = &off_140B5E648;
		v36 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v47 = TlsValue;
		v48 = v36;
		v39 = &off_140B5E648;
		v40 = L"RecordId";
		v49 = Value;
		v41 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v39);
		v54 = v40;
		v39 = off_140B5E630;
		v42 = v4;
		v43 = &off_140B5E648;
		v44 = L"TableName";
		v53 = off_140B5E630;
		v56 = v4;
		v55 = v41;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v43);
		v58 = v44;
		v46 = L"WorldSocket";
		v60 = L"WorldSocket";
		v43 = &off_140B5E638;
		v57 = &off_140B5E638;
		v38[0] = (const __m128i*)0x141DF0FE8i64;
		v59 = lpTlsValue;
		v15 = sub_140197770(5, v38, (unsigned int)v4, &v57, &v53, &v47);
		v43 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		v16 = v41;
		v39 = &off_140B5E648;
	LABEL_15:
		TlsSetValue(dwTlsIndex, v16);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if (v15)
			DebugBreak();
		return 2147500037i64;
	}
	if (!v13)
	{
		TlsValue = &off_140B5E648;
		v36 = 0i64;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v47 = TlsValue;
		v48 = v36;
		v43 = &off_140B5E648;
		v44 = L"RecordId";
		v49 = Value;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v43);
		v58 = v44;
		v43 = off_140B5E630;
		v46 = v5;
		v39 = &off_140B5E648;
		v40 = L"TableName";
		v57 = off_140B5E630;
		v60 = v5;
		v59 = lpTlsValue;
		v41 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v39);
		v54 = v40;
		v42 = L"World";
		v56 = L"World";
		v39 = &off_140B5E638;
		v53 = &off_140B5E638;
		v38[0] = (const __m128i*)0x141DF0FA0i64;
		v55 = v41;
		v15 = sub_140197770(5, v38, (unsigned int)v5, &v53, &v57, &v47);
		v39 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v41);
		v16 = lpTlsValue;
		v43 = &off_140B5E648;
		goto LABEL_15;
	}
	if (v13[12] == v13[10] || v13[13] == v13[11])
		return 1i64;
	v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
	if (!sub_14024ACC0(v17))
		return 2147500037i64;
	v18 = *((_QWORD*)v14 + 1);
	if (v18)
	{
		if (v18 <= qword_140C3FE70)
			v19 = (const __m128i*)(qword_140C3FE68 + v18);
		else
			v19 = 0i64;
	}
	else
	{
		v19 = 0i64;
	}
	v20 = sub_1407DD8D8(v19, 0x5Cu);
	if (v20)
	{
		v21 = (__int64)v20->m128i_i64 + 2;
	}
	else
	{
		v22 = *((_QWORD*)v14 + 1);
		if (v22)
		{
			if (v22 <= qword_140C3FE70)
				v21 = qword_140C3FE68 + v22;
			else
				v21 = 0i64;
		}
		else
		{
			v21 = 0i64;
		}
	}
	v61 = 0i64;
	v23 = *((_QWORD*)v14 + 1);
	v38[0] = 0i64;
	if (v23)
	{
		if (v23 <= qword_140C3FE70)
			v24 = qword_140C3FE68 + v23;
		else
			v24 = 0i64;
	}
	else
	{
		v24 = 0i64;
	}
	v25 = sub_1402D9AB0(v24, v21, v38);
	v26 = v38[0];
	if (v25 >= 0)
	{
		if ((*(int(__fastcall**)(const __m128i*, _DWORD*, _QWORD, __int64*, _DWORD))(*(_QWORD*)v38[0] + 208i64))(
			v38[0],
			v14 + 10,
			(unsigned int)v14[14],
			&v61,
			(_DWORD)v5) >= 0)
		{
			if ((*(int(__fastcall**)(_QWORD, __int64, _QWORD, __int64, _DWORD, int, __int64*))(**((_QWORD**)v50 + 3656)
				+ 256i64))(
					*((_QWORD*)v50 + 3656),
					v61,
					(unsigned int)v4,
					v12 + 8,
					*(_DWORD*)(v12 + 24),
					v62,
					&v52) >= 0)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v52 + 48i64))(v52);
				v30 = *((_QWORD*)v51 + 1);
				v31 = (int*)v30;
				v32 = *(_QWORD*)(v30 + 8);
				while (v32)
				{
					if (*(_DWORD*)(v32 + 32) < (unsigned int)v4)
					{
						v32 = *(_QWORD*)(v32 + 24);
					}
					else
					{
						v31 = (int*)v32;
						v32 = *(_QWORD*)(v32 + 16);
					}
				}
				if (v31 == (int*)v30 || (unsigned int)v4 < v31[8])
				{
					v33 = (__int64)v51;
					LODWORD(v38[0]) = (_DWORD)v4;
					v38[1] = 0i64;
					v51 = v31;
					sub_140055C60(v33, &v50, (__int64*)&v51, v38);
					v31 = v50;
				}
				*((_QWORD*)v31 + 5) = v52;
			}
			goto LABEL_55;
		}
		v36 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v27 = 0x141DF10A0i64;
		v28 = &unk_140C8A754;
	}
	else
	{
		v36 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v27 = 0x141DF1020i64;
		v28 = &unk_140C8A758;
	}
	v38[0] = (const __m128i*)v27;
	v47 = TlsValue;
	v48 = v36;
	LODWORD(v34) = (_DWORD)v5;
	v49 = Value;
	v29 = sub_1401971E0(v28, 5, v38, (unsigned int)v4, v34, &v47);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	if (v29)
		DebugBreak();
LABEL_55:
	if (v61)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v61 + 8i64))(v61);
	if (v26)
		(*(void(__fastcall**)(const __m128i*))(v26->m128i_i64[0] + 8))(v26);
	return 0i64;
}
// 1403DCFD9: variable 'v34' is possibly undefined
// 140A42BC0: using guessed type wchar_t aTablename[10];
// 140A42C08: using guessed type wchar_t aRecordid[9];
// 140AF6950: using guessed type wchar_t aWorld_0[6];
// 140AF6990: using guessed type wchar_t aWorldsocket_0[12];
// 140B5E630: using guessed type __int64 (__fastcall *off_140B5E630[2])();
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;

