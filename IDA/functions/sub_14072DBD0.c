//----- (000000014072DBD0) ----------------------------------------------------
__int64 __fastcall sub_14072DBD0(_QWORD* a1)
{
	__int64 result; // rax
	unsigned __int16* v3; // rdi
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rcx
	__int16* v7; // rax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	result = sub_140056AB0(a1, 1u);
	if (result)
	{
		v3 = 0i64;
		v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)result + 16i64))(*(_QWORD*)result);
		v5 = sub_14024DB80(v4);
		if (v5)
		{
			v7 = sub_14034BDD0(v6, *(_DWORD*)(v5 + 4));
			v3 = (unsigned __int16*)&unk_1409F8FBC;
			if (v7)
				v3 = (unsigned __int16*)v7;
		}
		v8 = (unsigned __int64*)sub_14018F0E0(&v10, v3)[1];
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
		if (v11)
			sub_14018B900(v11, 0);
		return 1i64;
	}
	return result;
}
// 14072DC14: variable 'v6' is possibly undefined

