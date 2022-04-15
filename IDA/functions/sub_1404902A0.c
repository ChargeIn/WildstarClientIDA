//----- (00000001404902A0) ----------------------------------------------------
int* __fastcall sub_1404902A0(__int64 a1, __int64 a2)
{
	int* result; // rax
	int* v4; // rbx
	int* v5; // rax

	result = sub_14018B280(32i64, 0);
	v4 = result;
	if (result)
	{
		*((_QWORD*)result + 1) = a2;
		*(_QWORD*)result = off_140B67390;
		v5 = sub_14018B280(24i64, 0);
		*((_QWORD*)v4 + 3) = v5;
		*(_QWORD*)v5 = v5;
		*(_QWORD*)(*((_QWORD*)v4 + 3) + 8i64) = *((_QWORD*)v4 + 3);
		*(_QWORD*)v4 = off_140B67390;
		return v4;
	}
	return result;
}
// 140B67390: using guessed type __int64 (__fastcall *off_140B67390[13])();

