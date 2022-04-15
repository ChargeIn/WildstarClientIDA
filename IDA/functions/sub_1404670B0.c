#include "../winhttp.h"

//----- (00000001404670B0) ----------------------------------------------------
__int64* __fastcall sub_1404670B0(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v3; // esi
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rsi
	int* v7; // rax
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rsi
	__int64 v12; // rcx
	__int64** v13; // r14
	__int64 v14; // rax
	__int64 v15; // rcx
	unsigned int v16; // edx
	unsigned int v17; // eax
	__int64 v18; // r8
	_DWORD* i; // rcx
	__int64 v20; // rcx
	int v21; // edx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // rbx
	__int64 v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34[3]; // [rsp+20h] [rbp-E0h] BYREF
	int v35; // [rsp+38h] [rbp-C8h]
	int v36[16]; // [rsp+3Ch] [rbp-C4h] BYREF
	__int64 v37; // [rsp+7Ch] [rbp-84h]
	__int64 v38; // [rsp+84h] [rbp-7Ch]
	__int64 v39; // [rsp+8Ch] [rbp-74h]
	__int64 v40; // [rsp+98h] [rbp-68h]
	__int64 v41; // [rsp+A0h] [rbp-60h]
	__int64 v42; // [rsp+A8h] [rbp-58h]
	__int64 v43; // [rsp+B0h] [rbp-50h]
	__int64 v44; // [rsp+B8h] [rbp-48h]
	__int64 v45; // [rsp+C0h] [rbp-40h]
	int v46; // [rsp+C8h] [rbp-38h]
	__int64 v47; // [rsp+D0h] [rbp-30h]
	__int64 v48; // [rsp+D8h] [rbp-28h]
	__int64 v49; // [rsp+E0h] [rbp-20h]
	__int64 v50; // [rsp+E8h] [rbp-18h]
	__int64 v51; // [rsp+F0h] [rbp-10h]
	__int64 v52; // [rsp+F8h] [rbp-8h]
	__int64 v53; // [rsp+100h] [rbp+0h]
	int v54; // [rsp+108h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 24);
	if (v1 && (v3 = *(_DWORD*)(v1 + 356)) != 0)
	{
		if (!*(_QWORD*)(a1 + 3272))
		{
			v4 = 0i64;
			v34[2] = 2i64;
			v35 = 1065353216;
			v34[0] = 0i64;
			v34[1] = 0i64;
			sub_1407E4830(v36, 0i64, 0x40ui64);
			v46 = 0;
			v47 = 0i64;
			v48 = 0i64;
			v37 = 0i64;
			v38 = 0i64;
			v39 = 0i64;
			v40 = 0i64;
			v41 = 0i64;
			v42 = 0i64;
			v43 = 0i64;
			v44 = 0i64;
			v45 = 0i64;
			v49 = 0i64;
			v50 = 0i64;
			v51 = 0i64;
			v52 = 0i64;
			v53 = 0i64;
			v54 = 0;
			v5 = sub_1401F8B20(v3);
			if (v5)
				sub_1401DAB50((__int64)v34, v5, 1.0);
			v6 = *(_QWORD*)(qword_140C65898 + 29264);
			v7 = sub_14018B280(3200i64, 0);
			if (v7)
				v4 = sub_1401DF340((__int64)v7);
			if ((*(int(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v4 + 24i64))(v4, v6, v34) < 0)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 360i64))(v4, 1i64);
				return *(__int64**)(a1 + 3264);
			}
			*(_QWORD*)(a1 + 3272) = v4;
		}
		return *(__int64**)(a1 + 3272);
	}
	else
	{
		if (!(*(unsigned int (**)(void))(*(_QWORD*)a1 + 32i64))())
			return *(__int64**)(a1 + 3264);
		v9 = *(_QWORD*)(a1 + 184);
		if (!v9 || *(_DWORD*)(v9 + 4) != 4 || !*(_QWORD*)(a1 + 408))
			return *(__int64**)(a1 + 3264);
		v10 = sub_14045B6B0(a1);
		v11 = sub_1403D90D0(qword_140C65898, v10);
		if (!v11)
		{
			v12 = *(_QWORD*)(a1 + 184);
			if (v12)
			{
				if ((*(_DWORD*)(v12 + 96) & 0x2000) != 0)
				{
					if (*(_QWORD*)(a1 + 408))
						v11 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(a1 + 400) + 8i64));
					else
						v11 = 0i64;
				}
			}
		}
		v13 = (__int64**)(a1 + 3272);
		if (*(_QWORD*)(a1 + 3272))
			goto LABEL_38;
		if (!v11)
			return *(__int64**)(a1 + 3264);
		v14 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v11 + 204), v11);
		v15 = v14;
		if (!v14)
			return *(__int64**)(a1 + 3264);
		v16 = *(_DWORD*)(v14 + 40);
		v17 = 0;
		if (!v16)
			return *(__int64**)(a1 + 3264);
		v18 = *(_QWORD*)(v15 + 48);
		for (i = (_DWORD*)(v18 + 16); *i != 36; i += 42)
		{
			if (++v17 >= v16)
				return *(__int64**)(a1 + 3264);
		}
		if (((v20 = 168i64 * v17, (v21 = *(_DWORD*)(v20 + v18 + 76)) != 0) || (v21 = *(_DWORD*)(v20 + v18 + 64)) != 0)
			&& (v22 = sub_1404845C0(qword_140C65918, v21)) != 0
			&& (sub_1401DAB50((__int64)v34, v22, 1.0),
				sub_1401DB2A0(*(_QWORD*)(qword_140C65898 + 29264), (__int64)v34, (__int64*)(a1 + 3272)),
				*(_QWORD*)(a1 + 3280) = 0i64,
				*v13))
		{
		LABEL_38:
			if (v11)
			{
				v23 = *(_QWORD*)(v11 + 3264);
				if (v23)
				{
					if (*(_DWORD*)(a1 + 3280) != *(_DWORD*)(v11 + 8)
						|| *(_DWORD*)(a1 + 3284) != (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v23 + 32i64))(v23))
					{
						v24 = **v13;
						v25 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v11 + 3264) + 64i64))(
							*(_QWORD*)(v11 + 3264),
							65i64);
						(*(void(__fastcall**)(__int64*, __int64, __int64))(v24 + 72))(*v13, 65i64, v25);
						v26 = **v13;
						v27 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v11 + 3264) + 64i64))(
							*(_QWORD*)(v11 + 3264),
							66i64);
						(*(void(__fastcall**)(__int64*, __int64, __int64))(v26 + 72))(*v13, 66i64, v27);
						v28 = **v13;
						v29 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v11 + 3264) + 64i64))(
							*(_QWORD*)(v11 + 3264),
							67i64);
						(*(void(__fastcall**)(__int64*, __int64, __int64))(v28 + 72))(*v13, 67i64, v29);
						v30 = **v13;
						v31 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v11 + 3264) + 64i64))(
							*(_QWORD*)(v11 + 3264),
							68i64);
						(*(void(__fastcall**)(__int64*, __int64, __int64))(v30 + 72))(*v13, 68i64, v31);
						v32 = **v13;
						v33 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v11 + 3264) + 64i64))(
							*(_QWORD*)(v11 + 3264),
							69i64);
						(*(void(__fastcall**)(__int64*, __int64, __int64))(v32 + 72))(*v13, 69i64, v33);
						*(_DWORD*)(a1 + 3280) = *(_DWORD*)(v11 + 8);
						*(_DWORD*)(a1 + 3284) = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 3264) + 32i64))(*(_QWORD*)(v11 + 3264));
					}
				}
			}
			return *v13;
		}
		else
		{
			return *(__int64**)(a1 + 3264);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1404670B0: using guessed type int var_F4[16];

