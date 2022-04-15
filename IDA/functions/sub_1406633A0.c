//----- (00000001406633A0) ----------------------------------------------------
__int64 __fastcall sub_1406633A0(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int v4; // ecx
	__int16* v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8i64) + 172i64);
		if (v4)
		{
			v6 = sub_14022CC80(v4);
			if (v6)
				v5 = sub_14034BDD0(v7, *(_DWORD*)(v6 + 4));
			else
				v5 = (__int16*)&unk_1409F27F4;
		}
		else
		{
			v5 = (__int16*)&unk_1409F286C;
		}
		v8 = (unsigned __int64*)sub_14018F0E0(&v10, (unsigned __int16*)v5)[1];
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
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140663406: variable 'v7' is possibly undefined

