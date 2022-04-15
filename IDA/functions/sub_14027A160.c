//----- (000000014027A160) ----------------------------------------------------
__int64 __fastcall sub_14027A160(int a1, int a2)
{
	__int64 result; // rax

	if (a2 <= 0)
		return 0i64;
	if (a2 <= 2)
		return 8i64;
	if (a2 == 3)
		goto LABEL_6;
	if (a2 == 4)
		return 8i64;
	if (a2 != 5)
		return 0i64;
LABEL_6:
	result = 40i64;
	if (dword_140AE64C0[a1])
		return 72i64;
	return result;
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];

