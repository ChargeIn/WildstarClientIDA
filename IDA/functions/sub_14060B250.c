//----- (000000014060B250) ----------------------------------------------------
_BOOL8 __fastcall sub_14060B250(int* a1)
{
	_BOOL8 result; // rax
	int v3; // edx
	__int64 v4; // rax

	result = 0;
	if ((unsigned int)sub_1403C2EE0((__int64)a1, a1[3], a1[2]))
	{
		v3 = a1[5];
		if (!v3)
			return 1;
		v4 = sub_1407A0FD0(qword_140C65B70, v3);
		if (!v4 || *(int*)(*(_QWORD*)(v4 + 112) + 264i64) >= 0)
			return 1;
	}
	return result;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

