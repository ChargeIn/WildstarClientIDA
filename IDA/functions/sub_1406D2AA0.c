//----- (00000001406D2AA0) ----------------------------------------------------
__int64 __fastcall sub_1406D2AA0(__int64 a1)
{
	__int64 v2; // rdx
	__int64 result; // rax

	sub_1406D0EC0((_DWORD*)a1);
	if (*(char*)(a1 + 28) < 0 && *(_QWORD*)(a1 + 2112) < (unsigned __int64)qword_140C65C40)
	{
		sub_1406D31C0((_QWORD*)a1, a1 + 848, 1);
		*(_QWORD*)(a1 + 2112) = qword_140C65C40;
	}
	v2 = *(_QWORD*)(a1 + 1104);
	if (!v2
		|| ((result = *(unsigned int*)(v2 + 8), (_DWORD)result == 2) || (_DWORD)result == 5)
		&& (result = sub_1403AC780(qword_140C65898 + 160, (int*)(v2 + 12))) == 0)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 488i64))(a1, 0i64);
		return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 496i64))(a1, 0i64);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C40: using guessed type __int64 qword_140C65C40;

