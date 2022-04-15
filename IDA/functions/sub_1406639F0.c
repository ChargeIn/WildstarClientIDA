//----- (00000001406639F0) ----------------------------------------------------
__int64 __fastcall sub_1406639F0(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64* v2; // rsi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // rcx
	int v10; // ebp
	unsigned __int64 v11; // rsi
	__int64 v12; // r14
	unsigned __int64 v13; // r15
	__int64 v14; // rbp
	__int64 v15; // rbx
	__int64 v16; // rax
	_QWORD* v17; // rax
	__int64 v18; // rdx
	unsigned __int16* v19; // r10
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	unsigned __int16* v23; // r11
	__int64 v24; // rdx
	_QWORD* v25; // rax
	__int64 v26; // rdx
	__int64* v27; // rbx
	__int64 v28; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v29; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v30)(); // [rsp+30h] [rbp-38h] BYREF
	int v31; // [rsp+38h] [rbp-30h]
	__int64 v32; // [rsp+40h] [rbp-28h]
	int v33; // [rsp+48h] [rbp-20h]

	v1 = (__int64)a1;
	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v1 + 32);
		v30 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v32 = v1;
		v33 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0(v1);
		v6 = *(_QWORD*)(v1 + 16);
		v7 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		*(_QWORD*)(v1 + 16) += 16i64;
		v8 = sub_1400578C0(v1);
		v9 = *v2;
		v10 = v8;
		v31 = v8;
		sub_140550680(v9, &v28);
		v11 = v29;
		v12 = v28;
		v13 = v29 >> 1;
		if (v29 >> 1)
		{
			v14 = v28 + 40;
			do
			{
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v15 = *(_QWORD*)(v1 + 16);
				v16 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v15 + 8) = 5;
				*(_QWORD*)v15 = v16;
				*(_QWORD*)(v1 + 16) += 16i64;
				LODWORD(v15) = sub_1400578C0(v1);
				v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
				v18 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v18 = *v17;
				*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F0870(v1, v18, L"strSay", v19);
				*(_QWORD*)(v1 + 16) -= 16i64;
				v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
				*(_QWORD*)v21 = *v20;
				*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F0870(v1, v22, L"strResponse", v23);
				*(_QWORD*)(v1 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v30);
				sub_1400579E0(v1, v24, v15);
				v14 += 64i64;
				--v13;
			} while (v13);
			v1 = v32;
			v10 = v31;
		}
		v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v10);
		v26 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		if (v11)
		{
			v27 = (__int64*)(v12 + 8);
			do
			{
				if (*v27)
					sub_14018B900(*v27, 0);
				v27 += 4;
				--v11;
			} while (v11);
		}
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		sub_1400579E0(v1, v26, v10);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 1i64;
	}
}
// 140663B48: variable 'v19' is possibly undefined
// 140663B79: variable 'v21' is possibly undefined
// 140663B8B: variable 'v22' is possibly undefined
// 140663B8B: variable 'v23' is possibly undefined
// 140663BA7: variable 'v24' is possibly undefined
// 140663C2A: variable 'v26' is possibly undefined
// 140B2E498: using guessed type wchar_t aStrresponse[12];
// 140B2E4D8: using guessed type wchar_t aStrsay[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

