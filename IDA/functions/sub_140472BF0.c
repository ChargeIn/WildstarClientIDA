//----- (0000000140472BF0) ----------------------------------------------------
void __fastcall sub_140472BF0(__int64 a1, int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rcx
	int v7[2]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]
	int v9; // [rsp+30h] [rbp-18h]
	__int64 v10; // [rsp+34h] [rbp-14h]

	v2 = *(_QWORD*)(a1 + 3848);
	if (v2)
	{
		while (1)
		{
			if (!*(_QWORD*)(v2 + 5864))
				goto LABEL_13;
			v4 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v2 + 192));
			if (!v4 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4) || *(int*)(v2 + 196) > 2)
				goto LABEL_13;
			if (a2 == 64)
			{
				v5 = 109;
				goto LABEL_12;
			}
			if (a2 == 65)
				break;
			if (a2 == 66)
			{
				v5 = 111;
			LABEL_12:
				v6 = *(_QWORD*)(v2 + 5864);
				v7[0] = v5;
				v7[1] = 0;
				v8 = 1065353216i64;
				v9 = 1065353216;
				v10 = 3i64;
				(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v6 + 600i64))(v6, 7i64, v7);
			}
		LABEL_13:
			v2 = *(_QWORD*)(v2 + 3864);
			if (!v2)
				return;
		}
		v5 = 110;
		goto LABEL_12;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

