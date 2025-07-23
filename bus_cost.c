#include<stdio.h>
int main()
{
    int source_stage_no, dest_stage_no, stops, adults, children,  cost_for_adults, cost_for_children;
    float total_cost, cost_with_tax, road_tax;
    printf("Enter the number of adults and children:\n");
    scanf("%d%d",&adults, &children);
    printf("\nEnter the Source stage number:");
    scanf("%d",&source_stage_no );
    printf("\nEnter the Destination stage number:");
    scanf("%d",&dest_stage_no );
    stops = dest_stage_no - source_stage_no;
    cost_for_adults = adults*stops*10;
    cost_for_children =  children*stops*5;
    total_cost = cost_for_adults+cost_for_children;
    road_tax = (total_cost/100)*5;
    cost_with_tax = total_cost + road_tax;
    printf("\nThe Source stage number is %d", source_stage_no);
    printf("\nThe Destination stage number is %d", dest_stage_no);
    printf("\nThe number of adults is %d", adults);
    printf("\nThe number of children is %d", children);
    printf("\nThe ticket cost is %f", total_cost);
    printf("\nThe road tax is %f", road_tax);
    printf("\nThe Total price is %f", cost_with_tax);
    return 0;
}
