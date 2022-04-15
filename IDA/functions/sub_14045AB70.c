//----- (000000014045AB70) ----------------------------------------------------
void __fastcall sub_14045AB70(__int64 a1, int a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	int v7; // edi
	void(__fastcall * **v8)(_QWORD); // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	int* v12; // [rsp+30h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 280);
	if (!v3 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) != a2)
	{
		v5 = *(_QWORD*)(a1 + 272);
		if (v5 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) == a2)
		{
			v6 = *(_QWORD*)(a1 + 280);
			v7 = 0;
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				*(_QWORD*)(a1 + 280) = 0i64;
			}
			v8 = *(void(__fastcall****)(_QWORD))(a1 + 272);
			*(_QWORD*)(a1 + 280) = v8;
			(**v8)(v8);
		}
		else
		{
			if (!qword_140C665D0 || (int)sub_140716FA0(v5, a2, &v12) < 0)
				return;
			v9 = *(_QWORD*)(a1 + 280);
			v7 = 0;
			if (v9)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				*(_QWORD*)(a1 + 280) = 0i64;
			}
			*(_QWORD*)(a1 + 280) = v12;
		}
		v10 = qword_140C65898;
		*(_DWORD*)(a1 + 6312) = 1;
		v11 = *(_QWORD*)(v10 + 120);
		if (v11)
		{
			LOBYTE(v7) = *(_DWORD*)(a1 + 8) == *(_DWORD*)(v11 + 8);
			if (v7)
				*(_DWORD*)(v10 + 28568) = 1;
		}
	}
}
// 14045ABF0: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C665D0: using guessed type __int64 qword_140C665D0;

