//----- (00000001404B6B90) ----------------------------------------------------
void __fastcall sub_1404B6B90(__int64 a1, int a2)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rax
	_QWORD* v5; // r9
	__int64 v6; // rcx
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]
	__int64 v9; // [rsp+30h] [rbp-18h]

	v2 = qword_140C7DFD8;
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0i64;
	if (qword_140C7DFD8)
	{
		v7 = *(_QWORD*)(qword_140C7DFD8 + 8);
		v3 = *(_QWORD*)(qword_140C7DFD8 + 16);
	LABEL_15:
		v8 = v3;
		LODWORD(v9) = a2;
		sub_1403F4900(qword_140C65898, 0x52Bu, (__int64)&v7);
		return;
	}
	if (qword_140C7DE20)
	{
		while (1)
		{
			v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
			if (*(_DWORD*)(v4 + 16) == 7)
				break;
			if (++v2 >= (unsigned __int64)qword_140C7DE20)
				return;
		}
		v5 = *(_QWORD**)(qword_140C7DE18 + 8 * v2);
		if (v4)
		{
			v6 = xmmword_140C7DFC0;
			if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
			{
				while (*(_DWORD*)(*(_QWORD*)v6 + 48i64) != 5)
				{
					v6 += 8i64;
					if (v6 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
						return;
				}
				if (*(_QWORD*)v6 && *(_QWORD*)(*(_QWORD*)v6 + 40i64) == *v5)
				{
					v7 = *(_QWORD*)(qword_140C65898 + 29952);
					v3 = *(_QWORD*)(qword_140C65898 + 29960);
					goto LABEL_15;
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 140C7DFD8: using guessed type __int64 qword_140C7DFD8;

