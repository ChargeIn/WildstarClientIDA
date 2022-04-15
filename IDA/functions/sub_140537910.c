//----- (0000000140537910) ----------------------------------------------------
__int64 __fastcall sub_140537910(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	int* v4; // rax
	int v5; // [rsp+38h] [rbp+10h] BYREF

	result = sub_14052E9B0(a1);
	v3 = result;
	if (result)
	{
		v5 = (***(__int64(__fastcall****)(_QWORD))(result + 1152))(*(_QWORD*)(result + 1152));
		v4 = sub_140538120(v3 + 1376, &v5);
		return sub_140775220((__int64)v4, a1);
	}
	return result;
}

