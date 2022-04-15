//----- (0000000140112790) ----------------------------------------------------
__int64 __fastcall sub_140112790(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	HIMC v4; // rdx
	HWND v5; // rcx
	__int64(__fastcall * **v6)(_QWORD, void*, __int64*); // rcx
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	if ((*(_DWORD*)(a1 + 664) & 0x200i64) == 0)
		sub_140111E60(a1);
	result = (unsigned __int64)*(unsigned int*)(a1 + 664) >> 11;
	if ((*(_DWORD*)(a1 + 664) & 0x800i64) != 0)
	{
		v3 = qword_140C63650 + 200;
		v4 = *(HIMC*)(qword_140C63650 + 208);
		v5 = *(HWND*)(qword_140C63650 + 200);
		*(_DWORD*)(qword_140C63650 + 220) = 1;
		ImmAssociateContext(v5, v4);
		result = (__int64)sub_1401556C0(v3);
		v6 = *(__int64(__fastcall****)(_QWORD, void*, __int64*))(v3 + 472);
		if (v6)
		{
			if (*(_DWORD*)(v3 + 496) == -1)
			{
				v7 = 0i64;
				result = (**v6)(v6, &unk_140B5C848, &v7);
				if ((int)result >= 0)
				{
					(*(void(__fastcall**)(__int64, __int64*, _QWORD, __int64))(*(_QWORD*)v7 + 24i64))(
						v7,
						&qword_140B5C858,
						*(_QWORD*)(v3 + 488),
						v3 + 496);
					return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
				}
			}
		}
	}
	return result;
}
// 140B5C858: using guessed type __int64 qword_140B5C858;
// 140C63650: using guessed type __int64 qword_140C63650;

