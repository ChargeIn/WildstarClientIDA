//----- (00000001408934A0) ----------------------------------------------------
__int64 __fastcall sub_1408934A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v8; // rax
	__int64 result; // rax
	__int64(__fastcall * **v10)(_QWORD, _QWORD); // rbx

	v8 = sub_1408819F0(dword_140C10F20, 200i64);
	if (v8)
	{
		result = sub_1408989C0(v8, a1, a2);
		v10 = (__int64(__fastcall***)(_QWORD, _QWORD))result;
		if (!result)
			return result;
		++* (_DWORD*)(result + 80);
		if ((unsigned int)sub_140899420(result, a3, a4) == 1)
		{
			sub_14088B630((__int64)v10);
			return (__int64)v10;
		}
		sub_14088B850(v10);
		sub_14088B630((__int64)v10);
	}
	return 0i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

