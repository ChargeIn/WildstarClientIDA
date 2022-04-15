//----- (00000001407D6010) ----------------------------------------------------
__int64 __fastcall sub_1407D6010(_QWORD* a1, __int64 a2, __m128* a3, __int64 a4)
{
	unsigned int v4; // ebx
	char i; // si
	__int64 result; // rax

	v4 = 0;
	for (i = a4; (unsigned __int64)v4 < a1[36]; result = v4)
		sub_1407D6080(a1, v4++, i, a4, a3);
	return result;
}
// 1407D6050: variable 'a4' is possibly undefined

