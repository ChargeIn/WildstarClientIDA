//----- (00000001404FB2D0) ----------------------------------------------------
__int64 __fastcall sub_1404FB2D0(_QWORD* a1)
{
	unsigned int v1; // ebp
	unsigned __int16* v2; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	int v7; // eax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	unsigned __int16* v13; // [rsp+58h] [rbp+10h] BYREF

	v1 = 1;
	v2 = 0i64;
	v13 = 0i64;
	v4 = sub_1404F87C0(a1, 1u);
	v5 = v4;
	if (!v4)
		goto LABEL_14;
	v6 = *(_QWORD*)(v4 + 2328);
	if (v6 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v5 + 2328) + 112i64))(*(_QWORD*)(v5 + 2328));
	if (*(_QWORD*)(v5 + 2168) && (v7 = sub_1400300F0(v5 + 2336, (int**)&v13), v2 = v13, v7 >= 0))
	{
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, v13)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			sub_140058710((__int64)a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v12)
			sub_14018B900(v12, 0);
	}
	else
	{
	LABEL_14:
		v1 = 0;
	}
	if (v2)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v2 - 2) + 8i64))(v2 - 8);
	return v1;
}

