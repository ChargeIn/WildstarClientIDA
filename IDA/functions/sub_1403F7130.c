//----- (00000001403F7130) ----------------------------------------------------
__int64 __fastcall sub_1403F7130(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rbx
	__int64 result; // rax
	__int64 v7; // rcx
	__int64 v8; // [rsp+48h] [rbp+10h]

	v4 = a4;
	if (!a2)
		return 2147942487i64;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 32i64))(qword_140C65680);
	if ((int)result >= 0)
	{
		v7 = *(_QWORD*)(a1 + 8 * v4 + 31568);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(a1 + 8 * v4 + 31568) = 0i64;
		}
		*(_QWORD*)(a1 + 8 * v4 + 31568) = v8;
		return 0i64;
	}
	return result;
}
// 140C65680: using guessed type __int64 qword_140C65680;

