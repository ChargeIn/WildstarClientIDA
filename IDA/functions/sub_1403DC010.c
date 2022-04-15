//----- (00000001403DC010) ----------------------------------------------------
__int64 __fastcall sub_1403DC010(__int64 a1, int* a2)
{
	__int64 result; // rax
	__int64 v4; // rdi
	__int64 v5; // rsi
	__int64 v6; // rbp
	int v7; // eax
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // ebx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int16* v15; // rax
	__int64 v16; // rax
	__int64 v17; // [rsp+20h] [rbp-38h] BYREF
	int v18; // [rsp+28h] [rbp-30h]
	__int64 v19; // [rsp+2Ch] [rbp-2Ch]
	__int64 v20; // [rsp+34h] [rbp-24h]
	int v21; // [rsp+3Ch] [rbp-1Ch]

	result = sub_1403D90D0(a1, *a2);
	v4 = result;
	if (result)
	{
		v5 = *(_QWORD*)(result + 3264);
		if (v5)
		{
			result = sub_1404835C0(qword_140C65918, a2[1]);
			v6 = result;
			if (result)
			{
				v7 = *(unsigned __int8*)(result + 346);
				if (*(_DWORD*)(v4 + 216) != v7)
				{
					v8 = qword_140C65898;
					*(_DWORD*)(v4 + 216) = v7;
					*(_DWORD*)(v4 + 6312) = 1;
					v9 = *(_QWORD*)(v8 + 120);
					if (v9 && *(_DWORD*)(v4 + 8) == *(_DWORD*)(v9 + 8))
						*(_DWORD*)(v8 + 28568) = 1;
					sub_14045AEC0(v4);
				}
				(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)v4 + 24i64))(v4, (*(_BYTE*)(v6 + 347) & 3) != 0);
				sub_14047C210(v4, a2[2]);
				v10 = qword_140C65918;
				*(_QWORD*)(v4 + 3344) = 0i64;
				v11 = a2[1];
				v12 = sub_1404835C0(v10, v11);
				v13 = *(_QWORD*)(v4 + 3264);
				*(_DWORD*)(v4 + 32) = v11;
				*(_QWORD*)(v4 + 24) = v12;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 104i64))(v13);
				result = sub_1404674C0(v4);
				if ((int)result >= 0)
				{
					if (a2[4])
					{
						v15 = sub_14034BDD0(v14, *(_DWORD*)(v6 + 8));
						sub_14045B030(v4, (int*)v15);
					}
					if (a2[3])
					{
						if ((*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 264i64))(v5, 0i64))
						{
							v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 264i64))(v5, 0i64);
							v17 = 1334i64;
							v19 = 0i64;
							v18 = 1065353216;
							v20 = 0i64;
							v21 = 0;
							(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v16 + 584i64))(v16, 0i64, &v17);
						}
					}
					return 0i64;
				}
			}
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 1403DC148: variable 'v14' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;

