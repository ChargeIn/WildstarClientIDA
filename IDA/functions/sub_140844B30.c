//----- (0000000140844B30) ----------------------------------------------------
void __fastcall sub_140844B30(__int64 a1)
{
	_QWORD* v1; // rbx

	v1 = (_QWORD*)qword_140C61F90;
	if (qword_140C61F90)
	{
		do
		{
			if (sub_14085F280(v1, a1))
			{
				(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD)) * v1)(v1, 0i64, 0i64, 0i64);
				sub_14082F330((__int64)qword_140C61B68, v1[20], 0i64, 0);
			}
			v1 = (_QWORD*)v1[3];
		} while (v1);
	}
	sub_140833BC0(a1);
}
// 140C61F90: using guessed type __int64 qword_140C61F90;

